#=========================== begin_copyright_notice ============================
# Copyright (C) 2019-2021 Intel Corporation
# SPDX-License-Identifier: MIT
#============================ end_copyright_notice =============================

cmake_minimum_required(VERSION 4.3 FATAL_ERROR)

project(IGC LANGUAGES C CXX)

# =====================================================================
# Your Dynamic Workspace Overrides
# =====================================================================
set(IGC_OPTION__OUTPUT_DIR_HLSL "" CACHE PATH "")
set(GMMLIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../gmmlib" CACHE PATH "Path to gmmlib source")

# 1. Force IGC to use your standalone SPIRV-Tools workspace instead of external/
set(IGC_OPTION__USE_SYSTEM_SPIRV_TOOLS ON CACHE BOOL "Use standalone SPIRV-Tools" FORCE)
set(SPIRV_TOOLS_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../SPIRV-Tools" CACHE PATH "Path to SPIRV-Tools source")

# 2. Quiet down Protobuf/Metrics errors to prevent diving into legacy code paths
set(IGC_OPTION__DISABLE_METRICS ON CACHE BOOL "Disable IGC Metrics to bypass Protobuf" FORCE)

# 3. Explicitly default the build type to Release
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build.")

# Tell CMake where to throw compiled outputs inside your build directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# =====================================================================
# Trigger the actual Intel Compiler build logic
# =====================================================================
add_subdirectory(IGC)

list(APPEND IGC__IGC_TARGETS "igc_dll")
list(APPEND IGC__IGC_TARGETS "IGA_DLL")
list(APPEND IGC__IGC_TARGETS "IGA_EXE")
list(APPEND IGC__IGC_TARGETS "fcl_dll")
list(APPEND IGC__IGC_TARGETS "opencl-clang-lib")

# --- BEFORE ---
# set(IGC__IGC_TARGETS "${IGC__IGC_TARGETS}" PARENT_SCOPE)
# set(IGC_LIBRARY_NAME "${IGC_LIBRARY_NAME}" PARENT_SCOPE)
# set(FCL_LIBRARY_NAME "${FCL_LIBRARY_NAME}" PARENT_SCOPE)

# --- AFTER (FIXED) ---
set(IGC__IGC_TARGETS "${IGC__IGC_TARGETS}")
set(IGC_LIBRARY_NAME "${IGC_LIBRARY_NAME}")
set(FCL_LIBRARY_NAME "${FCL_LIBRARY_NAME}")