cmake_minimum_required (VERSION 4.3 FATAL_ERROR)

if (NOT DEFINED RUN_TEST_SUITE)
    option (RUN_TEST_SUITE "run test suite after install" OFF) # Defaulting to OFF to speed up our IGC tracking
endif ()

project(igfx_gmmumd)

# Only enable testing if we aren't being built inside another master project like IGC
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    enable_testing()
endif()

# =====================================================================
# Standalone GCC 16 Toolchain Relaxations
# =====================================================================
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "[GMM Custom Port] Relaxing strict compiler constraints for GCC 16")
    add_compile_options(
        -Wno-strict-aliasing 
        -Wno-narrowing 
        -Wno-unused-result
        -Wno-error=class-memaccess # Prevents modern GCC from exploding on legacy struct raw memcpys
    )
endif()

# Fall back cleanly into the actual build implementation folder
add_subdirectory(Source/GmmLib)