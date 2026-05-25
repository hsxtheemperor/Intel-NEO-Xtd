#!/usr/bin/env bash
# =============================================================================
# build_bif.sh  —  Compile IBiF_size_t.cl and extract actionable errors only.
#
# Output files (all under /tmp/bif_build/):
#   bif_errors_raw.txt      — full compiler stderr (overwritten each run)
#   bif_errors.txt          — APPENDED each run: timestamped errors only,
#                             deduplicated per session, missing-type lines
#                             surfaced at the top for quick review
#   bif_missing_types.txt   — APPENDED: just the unhandled _Generic types
#                             (one per line, deduplicated per session)
# =============================================================================

set -euo pipefail

CLANG="${CLANG:-clang}"          # override with CLANG=/path/to/clang if needed
IGC_ROOT="/home/harshit9745/SFXFolder/Workspace-Code/igc"
BIF_ROOT="${IGC_ROOT}/IGC/BiFModule"
OUT_DIR="/tmp/bif_build"
RAW_LOG="${OUT_DIR}/bif_errors_raw.txt"
ERRORS_LOG="${OUT_DIR}/bif_errors.txt"
MISSING_TYPES_LOG="${OUT_DIR}/bif_missing_types.txt"
TIMESTAMP="$(date '+%Y-%m-%d %H:%M:%S')"

mkdir -p "${OUT_DIR}"

# -----------------------------------------------------------------------------
# 1. Run the compiler — capture stderr only, ignore exit code
# -----------------------------------------------------------------------------
"${CLANG}" -cc1 -x cl               \
  -fblocks                           \
  -opencl-builtins                   \
  -triple=spir                       \
  -finclude-default-header           \
  -cl-std=CL2.0                      \
  -I "${BIF_ROOT}/Languages/OpenCL"  \
  -I "${BIF_ROOT}/Languages/OpenCL/PointerSize" \
  -I "${BIF_ROOT}/Languages/OpenCL/../../Headers" \
  -I "${BIF_ROOT}/../AdaptorOCL/ocl_igc_shared"   \
  -I "${IGC_ROOT}/IGC/AdaptorOCL/ocl_igc_shared/device_enqueue" \
  -D__32bit__=1                      \
  -D__IGC_BUILD__                    \
  -D__OPENCL_C_VERSION__=200         \
  -D__USE_KHRONOS_SPIRV_TRANSLATOR__ \
  -D__VME_TYPES_DEFINED__            \
  -emit-llvm                         \
  -debug-info-kind=standalone        \
  -dwarf-version=4                   \
  -o "${OUT_DIR}/bif_debug.ll"       \
  "${BIF_ROOT}/Languages/OpenCL/PointerSize/IBiF_size_t.cl" \
  2>"${RAW_LOG}" || true

# -----------------------------------------------------------------------------
# 2. Extract only lines that are actual errors (not notes, not warnings,
#    not the multi-line "candidate function" note cascades).
#    Format: file:line:col: error: <message>
# -----------------------------------------------------------------------------
ERRORS_ONLY="$(grep ': error: ' "${RAW_LOG}" | sort -u)"

ERROR_COUNT="$(echo "${ERRORS_ONLY}" | grep -c . || true)"

# -----------------------------------------------------------------------------
# 3. Identify _Generic mismatches — these are the "missing to_type" signals.
#    Pattern: error: controlling expression type '...' not compatible with
#    any generic association type
#    Also catch: no matching function for call to '__igc_astype'
#    Extract the type name from the context note that follows.
# -----------------------------------------------------------------------------
MISSING_TYPES="$(
  grep ': error: ' "${RAW_LOG}" \
  | grep -E "_Generic|no matching function for call to '__igc_astype'" \
  | grep -oP "(?<=type ')([^']+)(?=')" \
  | sort -u
)"

MISSING_COUNT="$(echo "${MISSING_TYPES}" | grep -c . || true)"

# -----------------------------------------------------------------------------
# 4. Append to the persistent logs
# -----------------------------------------------------------------------------

{
  echo "================================================================="
  echo "  BUILD RUN: ${TIMESTAMP}"
  echo "  Total unique errors : ${ERROR_COUNT}"
  echo "  Missing type pairs  : ${MISSING_COUNT}"
  echo "================================================================="

  if [ "${MISSING_COUNT}" -gt 0 ]; then
    echo ""
    echo "--- UNHANDLED _Generic / __igc_astype types (add overloads for these) ---"
    echo "${MISSING_TYPES}"
    echo ""
  fi

  echo "--- ALL ERRORS (deduplicated) ---"
  echo "${ERRORS_ONLY}"
  echo ""
} >> "${ERRORS_LOG}"

if [ "${MISSING_COUNT}" -gt 0 ]; then
  {
    echo "# ${TIMESTAMP}"
    echo "${MISSING_TYPES}"
  } >> "${MISSING_TYPES_LOG}"
fi

# -----------------------------------------------------------------------------
# 5. Print summary to terminal
# -----------------------------------------------------------------------------
echo ""
echo "=========================================="
echo "  BIF build complete — ${TIMESTAMP}"
echo "  Errors  : ${ERROR_COUNT}"
echo "  Missing types surfaced: ${MISSING_COUNT}"
echo "=========================================="

if [ "${MISSING_COUNT}" -gt 0 ]; then
  echo ""
  echo "Unhandled types (need __igc_astype overloads + _Generic arms):"
  echo "${MISSING_TYPES}" | sed 's/^/    /'
fi

echo ""
echo "Logs:"
echo "  Full raw output  : ${RAW_LOG}"
echo "  Appended errors  : ${ERRORS_LOG}"
echo "  Missing types    : ${MISSING_TYPES_LOG}"
echo ""

# Exit non-zero if there were any errors so CI can detect failures
[ "${ERROR_COUNT}" -eq 0 ]