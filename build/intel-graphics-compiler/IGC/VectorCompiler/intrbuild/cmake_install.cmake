# Install script for directory: /home/harshit9745/Workspace-Code/vc-intrinsics/GenXIntrinsics

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "genx-intrinsics-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/vc-intrinsics/GenXIntrinsics/include/llvm" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "genx-intrinsics-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/llvm/GenXIntrinsics" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/include/llvm/GenXIntrinsics/GenXIntrinsicDescription.gen")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/harshit9745/Workspace-Code/build/lib/libLLVMGenXIntrinsics.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics/LLVMGenXIntrinsicsConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics/LLVMGenXIntrinsicsConfig.cmake"
         "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/3b25474b1634d07f982a0f42e1f7b3fa/LLVMGenXIntrinsicsConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics/LLVMGenXIntrinsicsConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics/LLVMGenXIntrinsicsConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/3b25474b1634d07f982a0f42e1f7b3fa/LLVMGenXIntrinsicsConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/LLVMGenXIntrinsics" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/3b25474b1634d07f982a0f42e1f7b3fa/LLVMGenXIntrinsicsConfig-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22/VCIntrinsics22Config.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22/VCIntrinsics22Config.cmake"
         "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/c949dd19da12d22bc701799de35a8476/VCIntrinsics22Config.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22/VCIntrinsics22Config-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22/VCIntrinsics22Config.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/c949dd19da12d22bc701799de35a8476/VCIntrinsics22Config.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/VCIntrinsics22" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/CMakeFiles/Export/c949dd19da12d22bc701799de35a8476/VCIntrinsics22Config-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/include/llvm/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/lib/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/intrbuild/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
