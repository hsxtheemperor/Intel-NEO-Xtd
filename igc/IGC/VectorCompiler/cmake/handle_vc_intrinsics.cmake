#=========================== begin_copyright_notice ============================
#
# Copyright (C) 2020-2021 Intel Corporation
#
# SPDX-License-Identifier: MIT
#
#============================ end_copyright_notice =============================

include_guard(DIRECTORY)

# =====================================================================
# Modern Standalone LLVM 22 Port Overrides
# =====================================================================
# Bypassing legacy external Intel-downstream utility scripts
# include("${CMAKE_CURRENT_SOURCE_DIR}/../../external/llvm/llvm_utils.cmake")

# Explicitly default to building vc-intrinsics from your workspace source tree
# to bypass the missing 'llvm_define_mode_variable' macro definition completely.
set(IGC_OPTION__VC_INTRINSICS_MODE "Source" CACHE STRING "VC Intrinsics Build Mode")
set(PREBUILDS_MODE_NAME "Prebuilds")

if(IGC_OPTION__VC_INTRINSICS_MODE STREQUAL PREBUILDS_MODE_NAME)

  set(VC_INTRINSICS_PREBUILDS_PACKAGE_NAME VCIntrinsics${LLVM_VERSION_MAJOR})
  message(STATUS "[VC] : Searching prebuilt vc-intrinsics package")
  find_package(${VC_INTRINSICS_PREBUILDS_PACKAGE_NAME} REQUIRED)
  message(STATUS "[VC] : Found prebuilt vc-intrinsics package in: ${${VC_INTRINSICS_PREBUILDS_PACKAGE_NAME}_CONFIG}")

  # override default link libraries by list from vc-intrinsics build
  set(LLVM_COMPONENTS
      CodeGen
      Support
      Core
      Analysis
     )
  igc_get_llvm_targets(LLVM_LIBS ${LLVM_COMPONENTS})
  set_target_properties(LLVMGenXIntrinsics PROPERTIES
    INTERFACE_LINK_LIBRARIES "${LLVM_LIBS}"
  )
else()

  if(DEFINED VC_INTRINSICS_SRC)
    set(INTRSRC "${VC_INTRINSICS_SRC}/GenXIntrinsics")
  endif()

  if(NOT DEFINED INTRSRC)
    set(INTRSRC "${CMAKE_CURRENT_SOURCE_DIR}/../../../vc-intrinsics/GenXIntrinsics")
  endif()

  message(STATUS "[VC] Using vc-intrinsics source from: ${INTRSRC}")
  # Trick intrinsics.
  set(BUILD_EXTERNAL YES)
  # We are building intrinsics.
  set(INTRBUILD "${CMAKE_CURRENT_BINARY_DIR}/intrbuild")
  add_subdirectory(${INTRSRC} ${INTRBUILD} EXCLUDE_FROM_ALL)
endif() #VC_INTRINSICS_MODE