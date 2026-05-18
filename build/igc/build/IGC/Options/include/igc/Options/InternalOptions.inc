/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// String table

#ifdef OPTTABLE_STR_TABLE_CODE

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char OptionStrTableStorage[] =
  "\0"
  "-\0"
  "<input>\0"
  "<unknown>\0"
  "-128-GRF-per-thread\0"
  "-256-GRF-per-thread\0"
  "-binary-format=\0"
  "-binary-format\0"
  "-buffer-bounds-checking\0"
  "-buffer-offset-arg-required\0"
  "-cl-128-GRF-per-thread\0"
  "-cl-256-GRF-per-thread\0"
  "-cl-buffer-bounds-checking\0"
  "-cl-buffer-offset-arg-required\0"
  "-cl-compile-one-at-time\0"
  "-cl-disable-a64WA\0"
  "-cl-disable-noMaskWA\0"
  "-cl-disable-recompilation\0"
  "-cl-disable-zebin\0"
  "-cl-disableEUFusion\0"
  "-cl-emit-zebin-visa-sections\0"
  "-cl-enable-auto-large-GRF-mode\0"
  "-cl-enable-divergent-barrier-handling\0"
  "-cl-exclude-ir-from-zebin\0"
  "-cl-exp-register-file-size=\0"
  "-cl-exp-register-file-size\0"
  "-cl-ext=\0"
  "-cl-fail-on-spill\0"
  "-cl-force-disable-4GB-buffer\0"
  "-cl-force-emu-int32divrem\0"
  "-cl-force-emu-sp-int32divrem\0"
  "-cl-force-enable-a64WA\0"
  "-cl-force-global-mem-allocation\0"
  "-cl-fp64-gen-emu\0"
  "-cl-functonControl\0"
  "-cl-greater-than-4GB-buffer-required\0"
  "-cl-has-buffer-offset-arg\0"
  "-cl-has-positive-pointer-offset\0"
  "-cl-high-accuracy-nolut-math\0"
  "-cl-ignoreBFRounding\0"
  "-cl-include-sip-csr\0"
  "-cl-include-sip-kernel-debug\0"
  "-cl-include-sip-kernel-local-debug\0"
  "-cl-intel-128-GRF-per-thread\0"
  "-cl-intel-256-GRF-per-thread\0"
  "-cl-intel-buffer-bounds-checking\0"
  "-cl-intel-buffer-offset-arg-required\0"
  "-cl-intel-compile-one-at-time\0"
  "-cl-intel-disable-a64WA\0"
  "-cl-intel-disable-noMaskWA\0"
  "-cl-intel-disable-recompilation\0"
  "-cl-intel-disable-zebin\0"
  "-cl-intel-disableEUFusion\0"
  "-cl-intel-emit-zebin-visa-sections\0"
  "-cl-intel-enable-auto-large-GRF-mode\0"
  "-cl-intel-enable-divergent-barrier-handling\0"
  "-cl-intel-exclude-ir-from-zebin\0"
  "-cl-intel-exp-register-file-size=\0"
  "-cl-intel-exp-register-file-size\0"
  "-cl-intel-fail-on-spill\0"
  "-cl-intel-force-disable-4GB-buffer\0"
  "-cl-intel-force-emu-int32divrem\0"
  "-cl-intel-force-emu-sp-int32divrem\0"
  "-cl-intel-force-enable-a64WA\0"
  "-cl-intel-force-global-mem-allocation\0"
  "-cl-intel-fp64-gen-emu\0"
  "-cl-intel-functonControl\0"
  "-cl-intel-greater-than-4GB-buffer-required\0"
  "-cl-intel-has-buffer-offset-arg\0"
  "-cl-intel-has-positive-pointer-offset\0"
  "-cl-intel-high-accuracy-nolut-math\0"
  "-cl-intel-ignoreBFRounding\0"
  "-cl-intel-include-sip-csr\0"
  "-cl-intel-include-sip-kernel-debug\0"
  "-cl-intel-include-sip-kernel-local-debug\0"
  "-cl-intel-kernel-debug-enable\0"
  "-cl-intel-ldstcombine-max-loadbytes=\0"
  "-cl-intel-ldstcombine-max-storebytes=\0"
  "-cl-intel-ldstcombine=\0"
  "-cl-intel-ldstcombine_max-loadbytes\0"
  "-cl-intel-ldstcombine_max_storebytes\0"
  "-cl-intel-ldstcombine\0"
  "-cl-intel-load-cache-default=\0"
  "-cl-intel-load-cache-default\0"
  "-cl-intel-minimum-valid-address-checking\0"
  "-cl-intel-no-prera-scheduling\0"
  "-cl-intel-no-spill\0"
  "-cl-intel-num-thread-per-eu\0"
  "-cl-intel-private-memory-minimal-size-per-thread\0"
  "-cl-intel-replace-global-offsets-by-zero\0"
  "-cl-intel-scratch-space-private-memory-minimal-size-per-thread\0"
  "-cl-intel-skip-reloc-add\0"
  "-cl-intel-store-cache-default=\0"
  "-cl-intel-store-cache-default\0"
  "-cl-intel-use-32bit-ptr-arith\0"
  "-cl-intel-use-bindless-advanced-mode\0"
  "-cl-intel-use-bindless-buffers\0"
  "-cl-intel-use-bindless-images\0"
  "-cl-intel-use-bindless-legacy-mode\0"
  "-cl-intel-use-bindless-mode\0"
  "-cl-intel-use-bindless-printf\0"
  "-cl-intel-vector-coalesing=\0"
  "-cl-intel-vector-coalesing\0"
  "-cl-kernel-debug-enable\0"
  "-cl-ldstcombine-max-loadbytes=\0"
  "-cl-ldstcombine-max-storebytes=\0"
  "-cl-ldstcombine=\0"
  "-cl-ldstcombine_max-loadbytes\0"
  "-cl-ldstcombine_max_storebytes\0"
  "-cl-ldstcombine\0"
  "-cl-load-cache-default=\0"
  "-cl-load-cache-default\0"
  "-cl-minimum-valid-address-checking\0"
  "-cl-no-prera-scheduling\0"
  "-cl-no-spill\0"
  "-cl-num-thread-per-eu\0"
  "-cl-private-memory-minimal-size-per-thread\0"
  "-cl-replace-global-offsets-by-zero\0"
  "-cl-scratch-space-private-memory-minimal-size-per-thread\0"
  "-cl-skip-reloc-add\0"
  "-cl-store-cache-default=\0"
  "-cl-store-cache-default\0"
  "-cl-use-32bit-ptr-arith\0"
  "-cl-use-bindless-advanced-mode\0"
  "-cl-use-bindless-buffers\0"
  "-cl-use-bindless-images\0"
  "-cl-use-bindless-legacy-mode\0"
  "-cl-use-bindless-mode\0"
  "-cl-use-bindless-printf\0"
  "-cl-vector-coalesing=\0"
  "-cl-vector-coalesing\0"
  "-compile-one-at-time\0"
  "-disable-a64WA\0"
  "-disable-noMaskWA\0"
  "-disable-recompilation\0"
  "-disable-zebin\0"
  "-disableEUFusion\0"
  "-dump-asm\0"
  "-dump-isa-binary\0"
  "-dump-llvm-ir\0"
  "-D\0"
  "-emit-visa-only\0"
  "-emit-zebin-visa-sections\0"
  "-enable-auto-large-GRF-mode\0"
  "-enable-divergent-barrier-handling\0"
  "-exclude-ir-from-zebin\0"
  "-exp-register-file-size=\0"
  "-exp-register-file-size\0"
  "-fail-on-spill\0"
  "-flush-l3-for-global\0"
  "-force-cl-std\0"
  "-force-disable-4GB-buffer\0"
  "-force-emu-int32divrem\0"
  "-force-emu-sp-int32divrem\0"
  "-force-enable-a64WA\0"
  "-force-global-mem-allocation\0"
  "-fp64-gen-emu\0"
  "-freset-llvm-stats\0"
  "-freset-time-report\0"
  "-ftime-report\0"
  "-functonControl\0"
  "-gpu-scope-fence-on-single-tile\0"
  "-greater-than-4GB-buffer-required\0"
  "-has-buffer-offset-arg\0"
  "-has-positive-pointer-offset\0"
  "-help-internal\0"
  "-help\0"
  "-high-accuracy-nolut-math\0"
  "-ignoreBFRounding\0"
  "-include-sip-csr\0"
  "-include-sip-kernel-debug\0"
  "-include-sip-kernel-local-debug\0"
  "-kernel-debug-enable\0"
  "-ldstcombine-max-loadbytes=\0"
  "-ldstcombine-max-storebytes=\0"
  "-ldstcombine=\0"
  "-ldstcombine_max-loadbytes\0"
  "-ldstcombine_max_storebytes\0"
  "-ldstcombine\0"
  "-llvm-options=\0"
  "-llvm-options\0"
  "-load-cache-default=\0"
  "-load-cache-default\0"
  "-m32\0"
  "-m64\0"
  "-mdump_asm\0"
  "-minimum-valid-address-checking\0"
  "-no-prera-scheduling\0"
  "-no-spill\0"
  "-num-thread-per-eu\0"
  "-ocl-version=\0"
  "-print-stats\0"
  "-private-memory-minimal-size-per-thread\0"
  "-replace-global-offsets-by-zero\0"
  "-runtime=\0"
  "-runtime\0"
  "-scratch-space-private-memory-minimal-size-per-thread\0"
  "-skip-reloc-add\0"
  "-stats-file=\0"
  "-stats-file\0"
  "-store-cache-default=\0"
  "-store-cache-default\0"
  "-target-features=\0"
  "-target-features\0"
  "-use-32bit-ptr-arith\0"
  "-use-bindless-advanced-mode\0"
  "-use-bindless-buffers\0"
  "-use-bindless-images\0"
  "-use-bindless-legacy-mode\0"
  "-use-bindless-mode\0"
  "-use-bindless-printf\0"
  "-vc-disable-debuggable-kernels\0"
  "-vc-ignore-loop-unroll-threshold-on-pragma\0"
  "-vc-interop-subgroup-size\0"
  "-vc-loop-unroll-threshold=\0"
  "-vc-loop-unroll-threshold\0"
  "-vector-coalesing=\0"
  "-vector-coalesing\0"
  "-ze-128-GRF-per-thread\0"
  "-ze-256-GRF-per-thread\0"
  "-ze-buffer-bounds-checking\0"
  "-ze-buffer-offset-arg-required\0"
  "-ze-compile-one-at-time\0"
  "-ze-disable-a64WA\0"
  "-ze-disable-noMaskWA\0"
  "-ze-disable-recompilation\0"
  "-ze-disable-zebin\0"
  "-ze-disableEUFusion\0"
  "-ze-emit-zebin-visa-sections\0"
  "-ze-enable-auto-large-GRF-mode\0"
  "-ze-enable-divergent-barrier-handling\0"
  "-ze-exclude-ir-from-zebin\0"
  "-ze-exp-register-file-size=\0"
  "-ze-exp-register-file-size\0"
  "-ze-fail-on-spill\0"
  "-ze-force-disable-4GB-buffer\0"
  "-ze-force-emu-int32divrem\0"
  "-ze-force-emu-sp-int32divrem\0"
  "-ze-force-enable-a64WA\0"
  "-ze-force-global-mem-allocation\0"
  "-ze-fp64-gen-emu\0"
  "-ze-functonControl\0"
  "-ze-greater-than-4GB-buffer-required\0"
  "-ze-has-buffer-offset-arg\0"
  "-ze-has-positive-pointer-offset\0"
  "-ze-high-accuracy-nolut-math\0"
  "-ze-ignoreBFRounding\0"
  "-ze-include-sip-csr\0"
  "-ze-include-sip-kernel-debug\0"
  "-ze-include-sip-kernel-local-debug\0"
  "-ze-intel-128-GRF-per-thread\0"
  "-ze-intel-256-GRF-per-thread\0"
  "-ze-intel-buffer-bounds-checking\0"
  "-ze-intel-buffer-offset-arg-required\0"
  "-ze-intel-compile-one-at-time\0"
  "-ze-intel-disable-a64WA\0"
  "-ze-intel-disable-noMaskWA\0"
  "-ze-intel-disable-recompilation\0"
  "-ze-intel-disable-zebin\0"
  "-ze-intel-disableEUFusion\0"
  "-ze-intel-emit-zebin-visa-sections\0"
  "-ze-intel-enable-auto-large-GRF-mode\0"
  "-ze-intel-enable-divergent-barrier-handling\0"
  "-ze-intel-exclude-ir-from-zebin\0"
  "-ze-intel-exp-register-file-size=\0"
  "-ze-intel-exp-register-file-size\0"
  "-ze-intel-fail-on-spill\0"
  "-ze-intel-force-disable-4GB-buffer\0"
  "-ze-intel-force-emu-int32divrem\0"
  "-ze-intel-force-emu-sp-int32divrem\0"
  "-ze-intel-force-enable-a64WA\0"
  "-ze-intel-force-global-mem-allocation\0"
  "-ze-intel-fp64-gen-emu\0"
  "-ze-intel-functonControl\0"
  "-ze-intel-greater-than-4GB-buffer-required\0"
  "-ze-intel-has-buffer-offset-arg\0"
  "-ze-intel-has-positive-pointer-offset\0"
  "-ze-intel-high-accuracy-nolut-math\0"
  "-ze-intel-ignoreBFRounding\0"
  "-ze-intel-include-sip-csr\0"
  "-ze-intel-include-sip-kernel-debug\0"
  "-ze-intel-include-sip-kernel-local-debug\0"
  "-ze-intel-kernel-debug-enable\0"
  "-ze-intel-ldstcombine-max-loadbytes=\0"
  "-ze-intel-ldstcombine-max-storebytes=\0"
  "-ze-intel-ldstcombine=\0"
  "-ze-intel-ldstcombine_max-loadbytes\0"
  "-ze-intel-ldstcombine_max_storebytes\0"
  "-ze-intel-ldstcombine\0"
  "-ze-intel-load-cache-default=\0"
  "-ze-intel-load-cache-default\0"
  "-ze-intel-minimum-valid-address-checking\0"
  "-ze-intel-no-prera-scheduling\0"
  "-ze-intel-no-spill\0"
  "-ze-intel-num-thread-per-eu\0"
  "-ze-intel-private-memory-minimal-size-per-thread\0"
  "-ze-intel-replace-global-offsets-by-zero\0"
  "-ze-intel-scratch-space-private-memory-minimal-size-per-thread\0"
  "-ze-intel-skip-reloc-add\0"
  "-ze-intel-store-cache-default=\0"
  "-ze-intel-store-cache-default\0"
  "-ze-intel-use-32bit-ptr-arith\0"
  "-ze-intel-use-bindless-advanced-mode\0"
  "-ze-intel-use-bindless-buffers\0"
  "-ze-intel-use-bindless-images\0"
  "-ze-intel-use-bindless-legacy-mode\0"
  "-ze-intel-use-bindless-mode\0"
  "-ze-intel-use-bindless-printf\0"
  "-ze-intel-vector-coalesing=\0"
  "-ze-intel-vector-coalesing\0"
  "-ze-kernel-debug-enable\0"
  "-ze-ldstcombine-max-loadbytes=\0"
  "-ze-ldstcombine-max-storebytes=\0"
  "-ze-ldstcombine=\0"
  "-ze-ldstcombine_max-loadbytes\0"
  "-ze-ldstcombine_max_storebytes\0"
  "-ze-ldstcombine\0"
  "-ze-load-cache-default=\0"
  "-ze-load-cache-default\0"
  "-ze-minimum-valid-address-checking\0"
  "-ze-no-prera-scheduling\0"
  "-ze-no-spill\0"
  "-ze-num-thread-per-eu\0"
  "-ze-opt-128-GRF-per-thread\0"
  "-ze-opt-256-GRF-per-thread\0"
  "-ze-opt-buffer-bounds-checking\0"
  "-ze-opt-buffer-offset-arg-required\0"
  "-ze-opt-compile-one-at-time\0"
  "-ze-opt-disable-a64WA\0"
  "-ze-opt-disable-noMaskWA\0"
  "-ze-opt-disable-recompilation\0"
  "-ze-opt-disable-zebin\0"
  "-ze-opt-disableEUFusion\0"
  "-ze-opt-emit-zebin-visa-sections\0"
  "-ze-opt-enable-auto-large-GRF-mode\0"
  "-ze-opt-enable-divergent-barrier-handling\0"
  "-ze-opt-exclude-ir-from-zebin\0"
  "-ze-opt-exp-register-file-size=\0"
  "-ze-opt-exp-register-file-size\0"
  "-ze-opt-fail-on-spill\0"
  "-ze-opt-force-disable-4GB-buffer\0"
  "-ze-opt-force-emu-int32divrem\0"
  "-ze-opt-force-emu-sp-int32divrem\0"
  "-ze-opt-force-enable-a64WA\0"
  "-ze-opt-force-global-mem-allocation\0"
  "-ze-opt-fp64-gen-emu\0"
  "-ze-opt-functonControl\0"
  "-ze-opt-greater-than-4GB-buffer-required\0"
  "-ze-opt-has-buffer-offset-arg\0"
  "-ze-opt-has-positive-pointer-offset\0"
  "-ze-opt-high-accuracy-nolut-math\0"
  "-ze-opt-ignoreBFRounding\0"
  "-ze-opt-include-sip-csr\0"
  "-ze-opt-include-sip-kernel-debug\0"
  "-ze-opt-include-sip-kernel-local-debug\0"
  "-ze-opt-kernel-debug-enable\0"
  "-ze-opt-ldstcombine-max-loadbytes=\0"
  "-ze-opt-ldstcombine-max-storebytes=\0"
  "-ze-opt-ldstcombine=\0"
  "-ze-opt-ldstcombine_max-loadbytes\0"
  "-ze-opt-ldstcombine_max_storebytes\0"
  "-ze-opt-ldstcombine\0"
  "-ze-opt-load-cache-default=\0"
  "-ze-opt-load-cache-default\0"
  "-ze-opt-minimum-valid-address-checking\0"
  "-ze-opt-no-prera-scheduling\0"
  "-ze-opt-no-spill\0"
  "-ze-opt-num-thread-per-eu\0"
  "-ze-opt-private-memory-minimal-size-per-thread\0"
  "-ze-opt-replace-global-offsets-by-zero\0"
  "-ze-opt-scratch-space-private-memory-minimal-size-per-thread\0"
  "-ze-opt-skip-reloc-add\0"
  "-ze-opt-store-cache-default=\0"
  "-ze-opt-store-cache-default\0"
  "-ze-opt-use-32bit-ptr-arith\0"
  "-ze-opt-use-bindless-advanced-mode\0"
  "-ze-opt-use-bindless-buffers\0"
  "-ze-opt-use-bindless-images\0"
  "-ze-opt-use-bindless-legacy-mode\0"
  "-ze-opt-use-bindless-mode\0"
  "-ze-opt-use-bindless-printf\0"
  "-ze-opt-vector-coalesing=\0"
  "-ze-opt-vector-coalesing\0"
  "-ze-private-memory-minimal-size-per-thread\0"
  "-ze-replace-global-offsets-by-zero\0"
  "-ze-scratch-space-private-memory-minimal-size-per-thread\0"
  "-ze-skip-reloc-add\0"
  "-ze-store-cache-default=\0"
  "-ze-store-cache-default\0"
  "-ze-use-32bit-ptr-arith\0"
  "-ze-use-bindless-advanced-mode\0"
  "-ze-use-bindless-buffers\0"
  "-ze-use-bindless-images\0"
  "-ze-use-bindless-legacy-mode\0"
  "-ze-use-bindless-mode\0"
  "-ze-use-bindless-printf\0"
  "-ze-vector-coalesing=\0"
  "-ze-vector-coalesing\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
OptionStrTable = OptionStrTableStorage;
#endif // OPTTABLE_STR_TABLE_CODE

/////////
// Prefixes

#ifdef OPTTABLE_PREFIXES_TABLE_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesTable[] = {
  0 /* prefixes */,
  1 /* prefixes */, 1 /* '-' */
};
#endif // OPTTABLE_PREFIXES_TABLE_CODE

/////////// SubCommand IDs

#ifdef OPTTABLE_SUBCOMMAND_IDS_TABLE_CODE
static constexpr unsigned OptionSubCommandIDsTable[] = {
  0 /* subcommands */
};
#endif // OPTTABLE_SUBCOMMAND_IDS_TABLE_CODE

/////////
// Prefix Union

#ifdef OPTTABLE_PREFIXES_UNION_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesUnion[] = {
  1 /* '-' */
};
#endif // OPTTABLE_PREFIXES_UNION_CODE

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(0, 3 /* <input> */, INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(0, 11 /* <unknown> */, UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 21 /* -128-GRF-per-thread */, anonymous_228, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 41 /* -256-GRF-per-thread */, anonymous_238, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 61 /* -binary-format= */, anonymous_58, Joined, INVALID, binary_format, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -binary-format <value>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 77 /* -binary-format */, binary_format, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Set in which format should be generated binary; values: 'cm', 'ocl' or 'ze'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 92 /* -buffer-bounds-checking */, anonymous_49, Flag, INVALID, buffer_bounds_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 116 /* -buffer-offset-arg-required */, anonymous_152, Flag, INVALID, buffer_offset_arg_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 144 /* -cl-128-GRF-per-thread */, anonymous_226, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 167 /* -cl-256-GRF-per-thread */, anonymous_236, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 190 /* -cl-buffer-bounds-checking */, anonymous_47, Flag, INVALID, buffer_bounds_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 217 /* -cl-buffer-offset-arg-required */, anonymous_150, Flag, INVALID, buffer_offset_arg_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 248 /* -cl-compile-one-at-time */, anonymous_417, Flag, INVALID, compile_one_at_time_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 272 /* -cl-disable-a64WA */, anonymous_170, Flag, INVALID, disable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 290 /* -cl-disable-noMaskWA */, anonymous_397, Flag, INVALID, disable_noMaskWA_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 311 /* -cl-disable-recompilation */, anonymous_266, Flag, INVALID, disable_recompilation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 337 /* -cl-disable-zebin */, anonymous_37, Flag, INVALID, disable_zebin_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 355 /* -cl-disableEUFusion */, anonymous_437, Flag, INVALID, disableEUFusion_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 375 /* -cl-emit-zebin-visa-sections */, anonymous_27, Flag, INVALID, emit_zebin_visa_sections_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 404 /* -cl-enable-auto-large-GRF-mode */, anonymous_246, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 435 /* -cl-enable-divergent-barrier-handling */, anonymous_539, Flag, INVALID, enable_divergent_barrier_handling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 473 /* -cl-exclude-ir-from-zebin */, anonymous_377, Flag, INVALID, exclude_ir_from_zebin_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 499 /* -cl-exp-register-file-size= */, anonymous_7, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 527 /* -cl-exp-register-file-size */, anonymous_210, Separate, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 554 /* -cl-ext= */, oclfe_cl_ext, Joined, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 563 /* -cl-fail-on-spill */, anonymous_457, Flag, INVALID, fail_on_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 581 /* -cl-force-disable-4GB-buffer */, anonymous_296, Flag, INVALID, force_disable_4GB_buffer_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 610 /* -cl-force-emu-int32divrem */, anonymous_276, Flag, INVALID, force_emu_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 636 /* -cl-force-emu-sp-int32divrem */, anonymous_286, Flag, INVALID, force_emu_sp_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 665 /* -cl-force-enable-a64WA */, anonymous_180, Flag, INVALID, force_enable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 688 /* -cl-force-global-mem-allocation */, anonymous_256, Flag, INVALID, force_global_mem_allocation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 720 /* -cl-fp64-gen-emu */, anonymous_509, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 737 /* -cl-functonControl */, anonymous_447, Separate, INVALID, functonControl_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 756 /* -cl-greater-than-4GB-buffer-required */, anonymous_130, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 793 /* -cl-has-buffer-offset-arg */, anonymous_140, Flag, INVALID, has_buffer_offset_arg_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 819 /* -cl-has-positive-pointer-offset */, anonymous_160, Flag, INVALID, has_positive_pointer_offset_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 851 /* -cl-high-accuracy-nolut-math */, anonymous_549, Flag, INVALID, high_accuracy_nolut_math_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 880 /* -cl-ignoreBFRounding */, anonymous_407, Flag, INVALID, ignoreBFRounding_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 901 /* -cl-include-sip-csr */, anonymous_90, Flag, INVALID, include_sip_csr_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 921 /* -cl-include-sip-kernel-debug */, anonymous_100, Flag, INVALID, include_sip_kernel_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 950 /* -cl-include-sip-kernel-local-debug */, anonymous_110, Flag, INVALID, include_sip_kernel_local_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 985 /* -cl-intel-128-GRF-per-thread */, anonymous_227, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1014 /* -cl-intel-256-GRF-per-thread */, anonymous_237, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1043 /* -cl-intel-buffer-bounds-checking */, anonymous_48, Flag, INVALID, buffer_bounds_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1076 /* -cl-intel-buffer-offset-arg-required */, anonymous_151, Flag, INVALID, buffer_offset_arg_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1113 /* -cl-intel-compile-one-at-time */, anonymous_418, Flag, INVALID, compile_one_at_time_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1143 /* -cl-intel-disable-a64WA */, anonymous_171, Flag, INVALID, disable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1167 /* -cl-intel-disable-noMaskWA */, anonymous_398, Flag, INVALID, disable_noMaskWA_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1194 /* -cl-intel-disable-recompilation */, anonymous_267, Flag, INVALID, disable_recompilation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1226 /* -cl-intel-disable-zebin */, anonymous_38, Flag, INVALID, disable_zebin_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1250 /* -cl-intel-disableEUFusion */, anonymous_438, Flag, INVALID, disableEUFusion_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1276 /* -cl-intel-emit-zebin-visa-sections */, anonymous_28, Flag, INVALID, emit_zebin_visa_sections_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1311 /* -cl-intel-enable-auto-large-GRF-mode */, anonymous_247, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1348 /* -cl-intel-enable-divergent-barrier-handling */, anonymous_540, Flag, INVALID, enable_divergent_barrier_handling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1392 /* -cl-intel-exclude-ir-from-zebin */, anonymous_378, Flag, INVALID, exclude_ir_from_zebin_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1424 /* -cl-intel-exp-register-file-size= */, anonymous_8, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1458 /* -cl-intel-exp-register-file-size */, anonymous_211, Separate, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1491 /* -cl-intel-fail-on-spill */, anonymous_458, Flag, INVALID, fail_on_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1515 /* -cl-intel-force-disable-4GB-buffer */, anonymous_297, Flag, INVALID, force_disable_4GB_buffer_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1550 /* -cl-intel-force-emu-int32divrem */, anonymous_277, Flag, INVALID, force_emu_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1582 /* -cl-intel-force-emu-sp-int32divrem */, anonymous_287, Flag, INVALID, force_emu_sp_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1617 /* -cl-intel-force-enable-a64WA */, anonymous_181, Flag, INVALID, force_enable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1646 /* -cl-intel-force-global-mem-allocation */, anonymous_257, Flag, INVALID, force_global_mem_allocation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1684 /* -cl-intel-fp64-gen-emu */, anonymous_510, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1707 /* -cl-intel-functonControl */, anonymous_448, Separate, INVALID, functonControl_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1732 /* -cl-intel-greater-than-4GB-buffer-required */, anonymous_131, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1775 /* -cl-intel-has-buffer-offset-arg */, anonymous_141, Flag, INVALID, has_buffer_offset_arg_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1807 /* -cl-intel-has-positive-pointer-offset */, anonymous_161, Flag, INVALID, has_positive_pointer_offset_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1845 /* -cl-intel-high-accuracy-nolut-math */, anonymous_550, Flag, INVALID, high_accuracy_nolut_math_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1880 /* -cl-intel-ignoreBFRounding */, anonymous_408, Flag, INVALID, ignoreBFRounding_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1907 /* -cl-intel-include-sip-csr */, anonymous_91, Flag, INVALID, include_sip_csr_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1933 /* -cl-intel-include-sip-kernel-debug */, anonymous_101, Flag, INVALID, include_sip_kernel_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1968 /* -cl-intel-include-sip-kernel-local-debug */, anonymous_111, Flag, INVALID, include_sip_kernel_local_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2009 /* -cl-intel-kernel-debug-enable */, anonymous_81, Flag, INVALID, kernel_debug_enable_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2039 /* -cl-intel-ldstcombine-max-loadbytes= */, anonymous_613, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2076 /* -cl-intel-ldstcombine-max-storebytes= */, anonymous_592, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2114 /* -cl-intel-ldstcombine= */, anonymous_571, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2137 /* -cl-intel-ldstcombine_max-loadbytes */, anonymous_602, Separate, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2173 /* -cl-intel-ldstcombine_max_storebytes */, anonymous_581, Separate, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2210 /* -cl-intel-ldstcombine */, anonymous_560, Separate, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2232 /* -cl-intel-load-cache-default= */, anonymous_479, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2262 /* -cl-intel-load-cache-default */, anonymous_468, Separate, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2291 /* -cl-intel-minimum-valid-address-checking */, anonymous_13, Separate, INVALID, minimum_valid_address_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2332 /* -cl-intel-no-prera-scheduling */, anonymous_191, Flag, INVALID, no_prera_scheduling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2362 /* -cl-intel-no-spill */, anonymous_388, Flag, INVALID, no_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2381 /* -cl-intel-num-thread-per-eu */, anonymous_201, Separate, INVALID, num_thread_per_eu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2409 /* -cl-intel-private-memory-minimal-size-per-thread */, anonymous_520, Separate, INVALID, private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2458 /* -cl-intel-replace-global-offsets-by-zero */, anonymous_71, Flag, INVALID, replace_global_offsets_by_zero_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2499 /* -cl-intel-scratch-space-private-memory-minimal-size-per-thread */, anonymous_530, Separate, INVALID, scratch_space_private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2562 /* -cl-intel-skip-reloc-add */, anonymous_428, Flag, INVALID, skip_reloc_add_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2587 /* -cl-intel-store-cache-default= */, anonymous_500, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2618 /* -cl-intel-store-cache-default */, anonymous_489, Separate, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2648 /* -cl-intel-use-32bit-ptr-arith */, anonymous_121, Flag, INVALID, use_32_bit_ptr_arith_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2678 /* -cl-intel-use-bindless-advanced-mode */, anonymous_347, Flag, INVALID, use_bindless_advanced_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2715 /* -cl-intel-use-bindless-buffers */, anonymous_3, Flag, INVALID, use_bindless_buffers_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2746 /* -cl-intel-use-bindless-images */, anonymous_307, Flag, INVALID, use_bindless_images_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2776 /* -cl-intel-use-bindless-legacy-mode */, anonymous_337, Flag, INVALID, use_bindless_legacy_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2811 /* -cl-intel-use-bindless-mode */, anonymous_317, Flag, INVALID, use_bindless_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2839 /* -cl-intel-use-bindless-printf */, anonymous_327, Flag, INVALID, use_bindless_printf_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2869 /* -cl-intel-vector-coalesing= */, anonymous_368, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2897 /* -cl-intel-vector-coalesing */, anonymous_357, Separate, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2924 /* -cl-kernel-debug-enable */, anonymous_80, Flag, INVALID, kernel_debug_enable_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2948 /* -cl-ldstcombine-max-loadbytes= */, anonymous_612, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2979 /* -cl-ldstcombine-max-storebytes= */, anonymous_591, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3011 /* -cl-ldstcombine= */, anonymous_570, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3028 /* -cl-ldstcombine_max-loadbytes */, anonymous_601, Separate, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3058 /* -cl-ldstcombine_max_storebytes */, anonymous_580, Separate, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3089 /* -cl-ldstcombine */, anonymous_559, Separate, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3105 /* -cl-load-cache-default= */, anonymous_478, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3129 /* -cl-load-cache-default */, anonymous_467, Separate, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3152 /* -cl-minimum-valid-address-checking */, anonymous_12, Separate, INVALID, minimum_valid_address_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3187 /* -cl-no-prera-scheduling */, anonymous_190, Flag, INVALID, no_prera_scheduling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3211 /* -cl-no-spill */, anonymous_387, Flag, INVALID, no_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3224 /* -cl-num-thread-per-eu */, anonymous_200, Separate, INVALID, num_thread_per_eu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3246 /* -cl-private-memory-minimal-size-per-thread */, anonymous_519, Separate, INVALID, private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3289 /* -cl-replace-global-offsets-by-zero */, anonymous_70, Flag, INVALID, replace_global_offsets_by_zero_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3324 /* -cl-scratch-space-private-memory-minimal-size-per-thread */, anonymous_529, Separate, INVALID, scratch_space_private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3381 /* -cl-skip-reloc-add */, anonymous_427, Flag, INVALID, skip_reloc_add_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3400 /* -cl-store-cache-default= */, anonymous_499, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3425 /* -cl-store-cache-default */, anonymous_488, Separate, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3449 /* -cl-use-32bit-ptr-arith */, anonymous_120, Flag, INVALID, use_32_bit_ptr_arith_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3473 /* -cl-use-bindless-advanced-mode */, anonymous_346, Flag, INVALID, use_bindless_advanced_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3504 /* -cl-use-bindless-buffers */, anonymous_2, Flag, INVALID, use_bindless_buffers_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3529 /* -cl-use-bindless-images */, anonymous_306, Flag, INVALID, use_bindless_images_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3553 /* -cl-use-bindless-legacy-mode */, anonymous_336, Flag, INVALID, use_bindless_legacy_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3582 /* -cl-use-bindless-mode */, anonymous_316, Flag, INVALID, use_bindless_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3604 /* -cl-use-bindless-printf */, anonymous_326, Flag, INVALID, use_bindless_printf_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3628 /* -cl-vector-coalesing= */, anonymous_367, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3650 /* -cl-vector-coalesing */, anonymous_356, Separate, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3671 /* -compile-one-at-time */, anonymous_419, Flag, INVALID, compile_one_at_time_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3692 /* -disable-a64WA */, anonymous_172, Flag, INVALID, disable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3707 /* -disable-noMaskWA */, anonymous_399, Flag, INVALID, disable_noMaskWA_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3725 /* -disable-recompilation */, anonymous_268, Flag, INVALID, disable_recompilation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3748 /* -disable-zebin */, anonymous_39, Flag, INVALID, disable_zebin_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3763 /* -disableEUFusion */, anonymous_439, Flag, INVALID, disableEUFusion_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3780 /* -dump-asm */, dump_asm, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Dump assembly (visaasm, asm, etc.)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3790 /* -dump-isa-binary */, dump_isa_binary, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Dump isa binary after finalization pass", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3807 /* -dump-llvm-ir */, dump_llvm_ir, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Dump llvm IR after SPIRV reading, optimizations and codegen", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3821 /* -D */, oclfe_D, JoinedOrSeparate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3824 /* -emit-visa-only */, emit_visa_only, Flag, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Compile until vISA", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3840 /* -emit-zebin-visa-sections */, anonymous_29, Flag, INVALID, emit_zebin_visa_sections_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3866 /* -enable-auto-large-GRF-mode */, anonymous_248, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3894 /* -enable-divergent-barrier-handling */, anonymous_541, Flag, INVALID, enable_divergent_barrier_handling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3929 /* -exclude-ir-from-zebin */, anonymous_379, Flag, INVALID, exclude_ir_from_zebin_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3952 /* -exp-register-file-size= */, anonymous_9, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3977 /* -exp-register-file-size */, anonymous_212, Separate, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4001 /* -fail-on-spill */, anonymous_459, Flag, INVALID, fail_on_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4016 /* -flush-l3-for-global */, flush_l3_for_global, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Enable flushing L3 cache for globals", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4037 /* -force-cl-std */, oclfe_force_cl_std, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4051 /* -force-disable-4GB-buffer */, anonymous_298, Flag, INVALID, force_disable_4GB_buffer_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4077 /* -force-emu-int32divrem */, anonymous_278, Flag, INVALID, force_emu_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4100 /* -force-emu-sp-int32divrem */, anonymous_288, Flag, INVALID, force_emu_sp_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4126 /* -force-enable-a64WA */, anonymous_182, Flag, INVALID, force_enable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4146 /* -force-global-mem-allocation */, anonymous_258, Flag, INVALID, force_global_mem_allocation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4175 /* -fp64-gen-emu */, anonymous_511, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4189 /* -freset-llvm-stats */, freset_llvm_stats, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Reset perfomance metrics before compilation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4208 /* -freset-time-report */, freset_time_report, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Reset timing summary before compilation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4228 /* -ftime-report */, ftime_report, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Print timing summary of each stage of compilation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4242 /* -functonControl */, anonymous_449, Separate, INVALID, functonControl_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4258 /* -gpu-scope-fence-on-single-tile */, gpu_scope_fence, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Allow the use of \"GPU\" fence scope on single-tile GPUs", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4290 /* -greater-than-4GB-buffer-required */, anonymous_132, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4324 /* -has-buffer-offset-arg */, anonymous_142, Flag, INVALID, has_buffer_offset_arg_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4347 /* -has-positive-pointer-offset */, anonymous_162, Flag, INVALID, has_positive_pointer_offset_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4376 /* -help-internal */, help_internal, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Display available internal options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4391 /* -help */, help, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Display available API options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4397 /* -high-accuracy-nolut-math */, anonymous_551, Flag, INVALID, high_accuracy_nolut_math_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4423 /* -ignoreBFRounding */, anonymous_409, Flag, INVALID, ignoreBFRounding_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4441 /* -include-sip-csr */, anonymous_92, Flag, INVALID, include_sip_csr_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4458 /* -include-sip-kernel-debug */, anonymous_102, Flag, INVALID, include_sip_kernel_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4484 /* -include-sip-kernel-local-debug */, anonymous_112, Flag, INVALID, include_sip_kernel_local_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4516 /* -kernel-debug-enable */, anonymous_82, Flag, INVALID, kernel_debug_enable_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4537 /* -ldstcombine-max-loadbytes= */, anonymous_614, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4565 /* -ldstcombine-max-storebytes= */, anonymous_593, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4594 /* -ldstcombine= */, anonymous_572, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4608 /* -ldstcombine_max-loadbytes */, anonymous_603, Separate, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4635 /* -ldstcombine_max_storebytes */, anonymous_582, Separate, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4663 /* -ldstcombine */, anonymous_561, Separate, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4676 /* -llvm-options= */, anonymous_56, Joined, INVALID, llvm_options, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -llvm-options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4691 /* -llvm-options */, llvm_options, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Additional options forwarded to llvm CommandLine global option parser", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4705 /* -load-cache-default= */, anonymous_480, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4726 /* -load-cache-default */, anonymous_469, Separate, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4746 /* -m32 */, oclfe_32bit, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4751 /* -m64 */, oclfe_64bit, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4756 /* -mdump_asm */, anonymous_55, Flag, INVALID, dump_asm, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -dump-asm", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4767 /* -minimum-valid-address-checking */, anonymous_14, Separate, INVALID, minimum_valid_address_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4799 /* -no-prera-scheduling */, anonymous_192, Flag, INVALID, no_prera_scheduling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4820 /* -no-spill */, anonymous_389, Flag, INVALID, no_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4830 /* -num-thread-per-eu */, anonymous_202, Separate, INVALID, num_thread_per_eu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4849 /* -ocl-version= */, oclfe_ocl_version, Joined, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4863 /* -print-stats */, print_stats, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Print performance metrics and statistics", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4876 /* -private-memory-minimal-size-per-thread */, anonymous_521, Separate, INVALID, private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4916 /* -replace-global-offsets-by-zero */, anonymous_72, Flag, INVALID, replace_global_offsets_by_zero_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4948 /* -runtime= */, anonymous_60, Joined, INVALID, binary_format, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -runtime <value>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4958 /* -runtime */, anonymous_59, Separate, INVALID, binary_format, nullptr, VCInternalOption, DefaultVis, 0,
       "Set runtime for which binary should be generated; values: 'ocl' or 'cm'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4967 /* -scratch-space-private-memory-minimal-size-per-thread */, anonymous_531, Separate, INVALID, scratch_space_private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5021 /* -skip-reloc-add */, anonymous_429, Flag, INVALID, skip_reloc_add_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5037 /* -stats-file= */, anonymous_61, Joined, INVALID, stats_file, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -stats-file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5050 /* -stats-file */, stats_file, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Filename to write statistics to", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5062 /* -store-cache-default= */, anonymous_501, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5084 /* -store-cache-default */, anonymous_490, Separate, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5105 /* -target-features= */, anonymous_57, Joined, INVALID, target_features, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -target-features", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5123 /* -target-features */, target_features, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Auxilirary target features", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5140 /* -use-32bit-ptr-arith */, anonymous_122, Flag, INVALID, use_32_bit_ptr_arith_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5161 /* -use-bindless-advanced-mode */, anonymous_348, Flag, INVALID, use_bindless_advanced_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5189 /* -use-bindless-buffers */, anonymous_4, Flag, INVALID, use_bindless_buffers_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5211 /* -use-bindless-images */, anonymous_308, Flag, INVALID, use_bindless_images_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5232 /* -use-bindless-legacy-mode */, anonymous_338, Flag, INVALID, use_bindless_legacy_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5258 /* -use-bindless-mode */, anonymous_318, Flag, INVALID, use_bindless_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5277 /* -use-bindless-printf */, anonymous_328, Flag, INVALID, use_bindless_printf_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5298 /* -vc-disable-debuggable-kernels */, fdisable_debuggable_kernels, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Disable emission of debuggable kernels for legacy path", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5329 /* -vc-ignore-loop-unroll-threshold-on-pragma */, vc_ignore_loop_unroll_threshold_on_pragma, Flag, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Ignore loop unroll threhsold on pragma for VC", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5372 /* -vc-interop-subgroup-size */, vc_interop_subgroup_size, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Set subgroup size used for cross-module calls/returns", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5398 /* -vc-loop-unroll-threshold= */, anonymous_62, Joined, INVALID, vc_loop_unroll_threshold, nullptr, VCInternalOption, DefaultVis, 0,
       "Alias for -vc-loop-unroll-threshold <value>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5425 /* -vc-loop-unroll-threshold */, vc_loop_unroll_threshold, Separate, INVALID, INVALID, nullptr, VCInternalOption, DefaultVis, 0,
       "Loop unroll threhsold for VC", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5451 /* -vector-coalesing= */, anonymous_369, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5470 /* -vector-coalesing */, anonymous_358, Separate, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5488 /* -ze-128-GRF-per-thread */, 128_grf_per_thread_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5511 /* -ze-256-GRF-per-thread */, 256_grf_per_thread_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5534 /* -ze-buffer-bounds-checking */, buffer_bounds_checking_common, Flag, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5561 /* -ze-buffer-offset-arg-required */, buffer_offset_arg_required_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5592 /* -ze-compile-one-at-time */, compile_one_at_time_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5616 /* -ze-disable-a64WA */, disable_a64wa_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5634 /* -ze-disable-noMaskWA */, disable_noMaskWA_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5655 /* -ze-disable-recompilation */, disable_recompilation_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5681 /* -ze-disable-zebin */, disable_zebin_common, Flag, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5699 /* -ze-disableEUFusion */, disableEUFusion_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5719 /* -ze-emit-zebin-visa-sections */, emit_zebin_visa_sections_common, Flag, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5748 /* -ze-enable-auto-large-GRF-mode */, enable_auto_large_GRF_mode_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5779 /* -ze-enable-divergent-barrier-handling */, enable_divergent_barrier_handling_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5817 /* -ze-exclude-ir-from-zebin */, exclude_ir_from_zebin_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5843 /* -ze-exp-register-file-size= */, anonymous_213_common, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5871 /* -ze-exp-register-file-size */, exp_register_file_size_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5898 /* -ze-fail-on-spill */, fail_on_spill_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5916 /* -ze-force-disable-4GB-buffer */, force_disable_4GB_buffer_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5945 /* -ze-force-emu-int32divrem */, force_emu_int32divrem_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5971 /* -ze-force-emu-sp-int32divrem */, force_emu_sp_int32divrem_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6000 /* -ze-force-enable-a64WA */, force_enable_a64wa_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6023 /* -ze-force-global-mem-allocation */, force_global_mem_allocation_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6055 /* -ze-fp64-gen-emu */, fp64_gen_emu_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6072 /* -ze-functonControl */, functonControl_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6091 /* -ze-greater-than-4GB-buffer-required */, greater_than_4GB_buffer_required_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6128 /* -ze-has-buffer-offset-arg */, has_buffer_offset_arg_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6154 /* -ze-has-positive-pointer-offset */, has_positive_pointer_offset_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6186 /* -ze-high-accuracy-nolut-math */, high_accuracy_nolut_math_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6215 /* -ze-ignoreBFRounding */, ignoreBFRounding_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6236 /* -ze-include-sip-csr */, include_sip_csr_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6256 /* -ze-include-sip-kernel-debug */, include_sip_kernel_debug_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6285 /* -ze-include-sip-kernel-local-debug */, include_sip_kernel_local_debug_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6320 /* -ze-intel-128-GRF-per-thread */, anonymous_224, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6349 /* -ze-intel-256-GRF-per-thread */, anonymous_234, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6378 /* -ze-intel-buffer-bounds-checking */, anonymous_45, Flag, INVALID, buffer_bounds_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6411 /* -ze-intel-buffer-offset-arg-required */, anonymous_148, Flag, INVALID, buffer_offset_arg_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6448 /* -ze-intel-compile-one-at-time */, anonymous_415, Flag, INVALID, compile_one_at_time_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6478 /* -ze-intel-disable-a64WA */, anonymous_168, Flag, INVALID, disable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6502 /* -ze-intel-disable-noMaskWA */, anonymous_395, Flag, INVALID, disable_noMaskWA_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6529 /* -ze-intel-disable-recompilation */, anonymous_264, Flag, INVALID, disable_recompilation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6561 /* -ze-intel-disable-zebin */, anonymous_35, Flag, INVALID, disable_zebin_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6585 /* -ze-intel-disableEUFusion */, anonymous_435, Flag, INVALID, disableEUFusion_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6611 /* -ze-intel-emit-zebin-visa-sections */, anonymous_25, Flag, INVALID, emit_zebin_visa_sections_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6646 /* -ze-intel-enable-auto-large-GRF-mode */, anonymous_244, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6683 /* -ze-intel-enable-divergent-barrier-handling */, anonymous_537, Flag, INVALID, enable_divergent_barrier_handling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6727 /* -ze-intel-exclude-ir-from-zebin */, anonymous_375, Flag, INVALID, exclude_ir_from_zebin_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6759 /* -ze-intel-exp-register-file-size= */, anonymous_5, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6793 /* -ze-intel-exp-register-file-size */, anonymous_208, Separate, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6826 /* -ze-intel-fail-on-spill */, anonymous_455, Flag, INVALID, fail_on_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6850 /* -ze-intel-force-disable-4GB-buffer */, anonymous_294, Flag, INVALID, force_disable_4GB_buffer_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6885 /* -ze-intel-force-emu-int32divrem */, anonymous_274, Flag, INVALID, force_emu_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6917 /* -ze-intel-force-emu-sp-int32divrem */, anonymous_284, Flag, INVALID, force_emu_sp_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6952 /* -ze-intel-force-enable-a64WA */, anonymous_178, Flag, INVALID, force_enable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6981 /* -ze-intel-force-global-mem-allocation */, anonymous_254, Flag, INVALID, force_global_mem_allocation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7019 /* -ze-intel-fp64-gen-emu */, anonymous_507, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7042 /* -ze-intel-functonControl */, anonymous_445, Separate, INVALID, functonControl_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7067 /* -ze-intel-greater-than-4GB-buffer-required */, anonymous_128, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7110 /* -ze-intel-has-buffer-offset-arg */, anonymous_138, Flag, INVALID, has_buffer_offset_arg_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7142 /* -ze-intel-has-positive-pointer-offset */, anonymous_158, Flag, INVALID, has_positive_pointer_offset_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7180 /* -ze-intel-high-accuracy-nolut-math */, anonymous_547, Flag, INVALID, high_accuracy_nolut_math_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7215 /* -ze-intel-ignoreBFRounding */, anonymous_405, Flag, INVALID, ignoreBFRounding_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7242 /* -ze-intel-include-sip-csr */, anonymous_88, Flag, INVALID, include_sip_csr_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7268 /* -ze-intel-include-sip-kernel-debug */, anonymous_98, Flag, INVALID, include_sip_kernel_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7303 /* -ze-intel-include-sip-kernel-local-debug */, anonymous_108, Flag, INVALID, include_sip_kernel_local_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7344 /* -ze-intel-kernel-debug-enable */, anonymous_78, Flag, INVALID, kernel_debug_enable_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7374 /* -ze-intel-ldstcombine-max-loadbytes= */, anonymous_610, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7411 /* -ze-intel-ldstcombine-max-storebytes= */, anonymous_589, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7449 /* -ze-intel-ldstcombine= */, anonymous_568, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7472 /* -ze-intel-ldstcombine_max-loadbytes */, anonymous_599, Separate, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7508 /* -ze-intel-ldstcombine_max_storebytes */, anonymous_578, Separate, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7545 /* -ze-intel-ldstcombine */, anonymous_557, Separate, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7567 /* -ze-intel-load-cache-default= */, anonymous_476, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7597 /* -ze-intel-load-cache-default */, anonymous_465, Separate, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7626 /* -ze-intel-minimum-valid-address-checking */, anonymous_10, Separate, INVALID, minimum_valid_address_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7667 /* -ze-intel-no-prera-scheduling */, anonymous_188, Flag, INVALID, no_prera_scheduling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7697 /* -ze-intel-no-spill */, anonymous_385, Flag, INVALID, no_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7716 /* -ze-intel-num-thread-per-eu */, anonymous_198, Separate, INVALID, num_thread_per_eu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7744 /* -ze-intel-private-memory-minimal-size-per-thread */, anonymous_517, Separate, INVALID, private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7793 /* -ze-intel-replace-global-offsets-by-zero */, anonymous_68, Flag, INVALID, replace_global_offsets_by_zero_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7834 /* -ze-intel-scratch-space-private-memory-minimal-size-per-thread */, anonymous_527, Separate, INVALID, scratch_space_private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7897 /* -ze-intel-skip-reloc-add */, anonymous_425, Flag, INVALID, skip_reloc_add_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7922 /* -ze-intel-store-cache-default= */, anonymous_497, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7953 /* -ze-intel-store-cache-default */, anonymous_486, Separate, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 7983 /* -ze-intel-use-32bit-ptr-arith */, anonymous_118, Flag, INVALID, use_32_bit_ptr_arith_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8013 /* -ze-intel-use-bindless-advanced-mode */, anonymous_344, Flag, INVALID, use_bindless_advanced_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8050 /* -ze-intel-use-bindless-buffers */, anonymous_0, Flag, INVALID, use_bindless_buffers_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8081 /* -ze-intel-use-bindless-images */, anonymous_304, Flag, INVALID, use_bindless_images_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8111 /* -ze-intel-use-bindless-legacy-mode */, anonymous_334, Flag, INVALID, use_bindless_legacy_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8146 /* -ze-intel-use-bindless-mode */, anonymous_314, Flag, INVALID, use_bindless_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8174 /* -ze-intel-use-bindless-printf */, anonymous_324, Flag, INVALID, use_bindless_printf_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8204 /* -ze-intel-vector-coalesing= */, anonymous_365, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8232 /* -ze-intel-vector-coalesing */, anonymous_354, Separate, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8259 /* -ze-kernel-debug-enable */, kernel_debug_enable_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8283 /* -ze-ldstcombine-max-loadbytes= */, anonymous_604_common, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8314 /* -ze-ldstcombine-max-storebytes= */, anonymous_583_common, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8346 /* -ze-ldstcombine= */, anonymous_562_common, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8363 /* -ze-ldstcombine_max-loadbytes */, ldstcombine_max_loadbytes_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8393 /* -ze-ldstcombine_max_storebytes */, ldstcombine_max_storebytes_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8424 /* -ze-ldstcombine */, ldstcombine_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8440 /* -ze-load-cache-default= */, anonymous_470_common, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8464 /* -ze-load-cache-default */, load_cache_default_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8487 /* -ze-minimum-valid-address-checking */, minimum_valid_address_checking_common, Separate, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8522 /* -ze-no-prera-scheduling */, no_prera_scheduling_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8546 /* -ze-no-spill */, no_spill_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8559 /* -ze-num-thread-per-eu */, num_thread_per_eu_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8581 /* -ze-opt-128-GRF-per-thread */, anonymous_225, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8608 /* -ze-opt-256-GRF-per-thread */, anonymous_235, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8635 /* -ze-opt-buffer-bounds-checking */, anonymous_46, Flag, INVALID, buffer_bounds_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Enable buffer bounds checking", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8666 /* -ze-opt-buffer-offset-arg-required */, anonymous_149, Flag, INVALID, buffer_offset_arg_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8701 /* -ze-opt-compile-one-at-time */, anonymous_416, Flag, INVALID, compile_one_at_time_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8729 /* -ze-opt-disable-a64WA */, anonymous_169, Flag, INVALID, disable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8751 /* -ze-opt-disable-noMaskWA */, anonymous_396, Flag, INVALID, disable_noMaskWA_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8776 /* -ze-opt-disable-recompilation */, anonymous_265, Flag, INVALID, disable_recompilation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8806 /* -ze-opt-disable-zebin */, anonymous_36, Flag, INVALID, disable_zebin_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Emit binary in legacy format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8828 /* -ze-opt-disableEUFusion */, anonymous_436, Flag, INVALID, disableEUFusion_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8852 /* -ze-opt-emit-zebin-visa-sections */, anonymous_26, Flag, INVALID, emit_zebin_visa_sections_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Add vISA asm as sections in ZeBin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8885 /* -ze-opt-enable-auto-large-GRF-mode */, anonymous_245, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8920 /* -ze-opt-enable-divergent-barrier-handling */, anonymous_538, Flag, INVALID, enable_divergent_barrier_handling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8962 /* -ze-opt-exclude-ir-from-zebin */, anonymous_376, Flag, INVALID, exclude_ir_from_zebin_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 8992 /* -ze-opt-exp-register-file-size= */, anonymous_6, Joined, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9024 /* -ze-opt-exp-register-file-size */, anonymous_209, Separate, INVALID, exp_register_file_size_common, nullptr, IGCInternalOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9055 /* -ze-opt-fail-on-spill */, anonymous_456, Flag, INVALID, fail_on_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9077 /* -ze-opt-force-disable-4GB-buffer */, anonymous_295, Flag, INVALID, force_disable_4GB_buffer_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9110 /* -ze-opt-force-emu-int32divrem */, anonymous_275, Flag, INVALID, force_emu_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9140 /* -ze-opt-force-emu-sp-int32divrem */, anonymous_285, Flag, INVALID, force_emu_sp_int32divrem_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9173 /* -ze-opt-force-enable-a64WA */, anonymous_179, Flag, INVALID, force_enable_a64wa_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9200 /* -ze-opt-force-global-mem-allocation */, anonymous_255, Flag, INVALID, force_global_mem_allocation_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9236 /* -ze-opt-fp64-gen-emu */, anonymous_508, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9257 /* -ze-opt-functonControl */, anonymous_446, Separate, INVALID, functonControl_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9280 /* -ze-opt-greater-than-4GB-buffer-required */, anonymous_129, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9321 /* -ze-opt-has-buffer-offset-arg */, anonymous_139, Flag, INVALID, has_buffer_offset_arg_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9351 /* -ze-opt-has-positive-pointer-offset */, anonymous_159, Flag, INVALID, has_positive_pointer_offset_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9387 /* -ze-opt-high-accuracy-nolut-math */, anonymous_548, Flag, INVALID, high_accuracy_nolut_math_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9420 /* -ze-opt-ignoreBFRounding */, anonymous_406, Flag, INVALID, ignoreBFRounding_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9445 /* -ze-opt-include-sip-csr */, anonymous_89, Flag, INVALID, include_sip_csr_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9469 /* -ze-opt-include-sip-kernel-debug */, anonymous_99, Flag, INVALID, include_sip_kernel_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9502 /* -ze-opt-include-sip-kernel-local-debug */, anonymous_109, Flag, INVALID, include_sip_kernel_local_debug_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9541 /* -ze-opt-kernel-debug-enable */, anonymous_79, Flag, INVALID, kernel_debug_enable_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9569 /* -ze-opt-ldstcombine-max-loadbytes= */, anonymous_611, Joined, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9604 /* -ze-opt-ldstcombine-max-storebytes= */, anonymous_590, Joined, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9640 /* -ze-opt-ldstcombine= */, anonymous_569, Joined, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9661 /* -ze-opt-ldstcombine_max-loadbytes */, anonymous_600, Separate, INVALID, ldstcombine_max_loadbytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9695 /* -ze-opt-ldstcombine_max_storebytes */, anonymous_579, Separate, INVALID, ldstcombine_max_storebytes_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9730 /* -ze-opt-ldstcombine */, anonymous_558, Separate, INVALID, ldstcombine_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9750 /* -ze-opt-load-cache-default= */, anonymous_477, Joined, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9778 /* -ze-opt-load-cache-default */, anonymous_466, Separate, INVALID, load_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9805 /* -ze-opt-minimum-valid-address-checking */, anonymous_11, Separate, INVALID, minimum_valid_address_checking_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Set minimal valid address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9844 /* -ze-opt-no-prera-scheduling */, anonymous_189, Flag, INVALID, no_prera_scheduling_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9872 /* -ze-opt-no-spill */, anonymous_386, Flag, INVALID, no_spill_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9889 /* -ze-opt-num-thread-per-eu */, anonymous_199, Separate, INVALID, num_thread_per_eu_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9915 /* -ze-opt-private-memory-minimal-size-per-thread */, anonymous_518, Separate, INVALID, private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 9962 /* -ze-opt-replace-global-offsets-by-zero */, anonymous_69, Flag, INVALID, replace_global_offsets_by_zero_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10001 /* -ze-opt-scratch-space-private-memory-minimal-size-per-thread */, anonymous_528, Separate, INVALID, scratch_space_private_memory_minimal_size_per_thread_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10062 /* -ze-opt-skip-reloc-add */, anonymous_426, Flag, INVALID, skip_reloc_add_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10085 /* -ze-opt-store-cache-default= */, anonymous_498, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10114 /* -ze-opt-store-cache-default */, anonymous_487, Separate, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10142 /* -ze-opt-use-32bit-ptr-arith */, anonymous_119, Flag, INVALID, use_32_bit_ptr_arith_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10170 /* -ze-opt-use-bindless-advanced-mode */, anonymous_345, Flag, INVALID, use_bindless_advanced_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10205 /* -ze-opt-use-bindless-buffers */, anonymous_1, Flag, INVALID, use_bindless_buffers_common, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10234 /* -ze-opt-use-bindless-images */, anonymous_305, Flag, INVALID, use_bindless_images_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10262 /* -ze-opt-use-bindless-legacy-mode */, anonymous_335, Flag, INVALID, use_bindless_legacy_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10295 /* -ze-opt-use-bindless-mode */, anonymous_315, Flag, INVALID, use_bindless_mode_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10321 /* -ze-opt-use-bindless-printf */, anonymous_325, Flag, INVALID, use_bindless_printf_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10349 /* -ze-opt-vector-coalesing= */, anonymous_366, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10375 /* -ze-opt-vector-coalesing */, anonymous_355, Separate, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10400 /* -ze-private-memory-minimal-size-per-thread */, private_memory_minimal_size_per_thread_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10443 /* -ze-replace-global-offsets-by-zero */, replace_global_offsets_by_zero_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10478 /* -ze-scratch-space-private-memory-minimal-size-per-thread */, scratch_space_private_memory_minimal_size_per_thread_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10535 /* -ze-skip-reloc-add */, skip_reloc_add_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10554 /* -ze-store-cache-default= */, anonymous_491_common, Joined, INVALID, store_cache_default_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10579 /* -ze-store-cache-default */, store_cache_default_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10603 /* -ze-use-32bit-ptr-arith */, use_32_bit_ptr_arith_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10627 /* -ze-use-bindless-advanced-mode */, use_bindless_advanced_mode_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10658 /* -ze-use-bindless-buffers */, use_bindless_buffers_common, Flag, INVALID, INVALID, nullptr, VCInternalOption | IGCInternalOption, DefaultVis, 0,
       "Use bindless mode for buffers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10683 /* -ze-use-bindless-images */, use_bindless_images_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10707 /* -ze-use-bindless-legacy-mode */, use_bindless_legacy_mode_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10736 /* -ze-use-bindless-mode */, use_bindless_mode_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10758 /* -ze-use-bindless-printf */, use_bindless_printf_common, Flag, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10782 /* -ze-vector-coalesing= */, anonymous_359_common, Joined, INVALID, vector_coalescing_common, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 10804 /* -ze-vector-coalesing */, vector_coalescing_common, Separate, INVALID, INVALID, nullptr, IGCInternalOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE

/////////

// SubCommands

#ifdef OPTTABLE_SUBCOMMANDS_CODE
static constexpr llvm::opt::OptTable::SubCommand OptionSubCommands[] = {
};
#endif // OPTTABLE_SUBCOMMANDS_CODE


