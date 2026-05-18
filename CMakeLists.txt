cmake_minimum_required(VERSION 4.3 FATAL_ERROR)

project(Intel_GPU_Driver_Workspace LANGUAGES C CXX)

# =====================================================================
# Global Toolchain & Compiler Options (Optimized for modern GCC 16)
# =====================================================================
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build.")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "=====================================================================")
message(STATUS "Initializing Master Workspace Core Engine")
message(STATUS "Compiler Target Identification: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "=====================================================================")

# Relax aggressive diagnostics for older driver source assets under modern GCC
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    add_compile_options(
        -Wno-strict-aliasing 
        -Wno-narrowing 
        -Wno-unused-result
        -Wno-error=class-memaccess
    )
endif()

# =====================================================================
# 1. Configure and Embed Graphics Memory Management Library (gmmlib)
# =====================================================================
set(GMMLIB_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/gmmlib")

if(EXISTS "${GMMLIB_SRC_DIR}/CMakeLists.txt")
    message(STATUS "[Workspace Master] Splicing 'gmmlib' tree into pipeline...")
    
    # Restrict internal testing routines so they don't break parent scope definitions
    set(RUN_TEST_SUITE OFF CACHE BOOL "Disable internal gmmlib test generation" FORCE)
    
    # Compile gmmlib directly into our local binary tree space
    add_subdirectory("${GMMLIB_SRC_DIR}" "${CMAKE_BINARY_DIR}/external/gmmlib")
    
    # Export explicitly structured alias tokens for IGC's link target maps
    if(TARGET igfx_gmmumd AND NOT TARGET GmmLib::gmmumd)
        add_library(GmmLib::gmmumd ALIAS igfx_gmmumd)
    endif()
else()
    message(FATAL_ERROR "[Workspace Master] CRITICAL: 'gmmlib' source folder missing at: ${GMMLIB_SRC_DIR}")
endif()

# =====================================================================
# 2. Configure and Embed SPIRV-Tools & SPIRV-Headers Framework
# =====================================================================
set(SPIRV_TOOLS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SPIRV-Tools")
set(SPIRV_HEADERS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SPIRV-Headers")

if(EXISTS "${SPIRV_TOOLS_DIR}/CMakeLists.txt")
    message(STATUS "[Workspace Master] Splicing 'SPIRV-Tools' tree into pipeline...")
    
    # Set up global bridge parameters so SPIRV-Tools inherently maps your header layout
    set(SPIRV_HEADER_DIR "${SPIRV_HEADERS_DIR}" CACHE PATH "Path to standalone SPIRV-Headers" FORCE)
    set(SPIRV_HEADER_INCLUDE_DIR "${SPIRV_HEADERS_DIR}/include" CACHE PATH "" FORCE)
    set(SPIRV-Headers_SOURCE_DIR "${SPIRV_HEADERS_DIR}" CACHE PATH "" FORCE)
    
    # Kill unit test lookups to prevent out-of-tree googletest dependency failures
    set(SPIRV_SKIP_TESTS ON CACHE BOOL "Skip SPIRV testing loops" FORCE)
    set(SPIRV_SKIP_EXECUTABLES OFF CACHE BOOL "" FORCE)

    add_subdirectory("${SPIRV_TOOLS_DIR}" "${CMAKE_BINARY_DIR}/external/SPIRV-Tools")
else()
    message(FATAL_ERROR "[Workspace Master] CRITICAL: 'SPIRV-Tools' source folder missing at: ${SPIRV_TOOLS_DIR}")
endif()

# =====================================================================
# 3. Configure and Embed Intel Graphics Compiler (igc)
# =====================================================================
set(IGC_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/igc")

if(EXISTS "${IGC_SRC_DIR}/CMakeLists.txt")
    message(STATUS "[Workspace Master] Splicing 'igc' tree into pipeline...")
    
    # Map output locations cleanly inside our master build folder layout
    set(IGC_OPTION__OUTPUT_DIR_HLSL "" CACHE PATH "" FORCE)
    
    # Flag to the subproject that our custom system libraries are ready in-tree
    set(GmmLib_FOUND TRUE CACHE BOOL "" FORCE)
    set(SPIRV-Tools_FOUND TRUE CACHE BOOL "" FORCE)

    # Let IGC process with parent scope protections disabled
    add_subdirectory("${IGC_SRC_DIR}" "${CMAKE_BINARY_DIR}/intel-graphics-compiler")
else()
    message(FATAL_ERROR "[Workspace Master] CRITICAL: 'igc' source folder missing at: ${IGC_SRC_DIR}")
endif()

message(STATUS "=====================================================================")
message(STATUS "Workspace Generation Complete. Ready for compilation.")
message(STATUS "=====================================================================")