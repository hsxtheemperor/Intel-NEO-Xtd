# Install script for directory: /home/harshit9745/Workspace-Code/igc/IGC

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}/usr/local/lib64/libigc.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libigc.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/libigc.so.1.0.1;/usr/local/lib64/libigc.so.1")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES
    "/home/harshit9745/Workspace-Code/build/lib/libigc.so.1.0.1"
    "/home/harshit9745/Workspace-Code/build/lib/libigc.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/local/lib64/libigc.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libigc.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/libigc.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES "/home/harshit9745/Workspace-Code/build/lib/libigc.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}/usr/local/lib64/libigdfcl.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libigdfcl.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/libigdfcl.so.1.0.1;/usr/local/lib64/libigdfcl.so.1")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES
    "/home/harshit9745/Workspace-Code/build/lib/libigdfcl.so.1.0.1"
    "/home/harshit9745/Workspace-Code/build/lib/libigdfcl.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/local/lib64/libigdfcl.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libigdfcl.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/libigdfcl.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES "/home/harshit9745/Workspace-Code/build/lib/libigdfcl.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/ocl_igc_shared")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/igc/IGC/AdaptorOCL/ocl_igc_shared")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/ocl_igc_interface")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/igc/IGC/AdaptorOCL/ocl_igc_interface")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/OCLAPI")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/igc/IGC/AdaptorOCL/OCLAPI")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/cif")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/igc/IGC/AdaptorOCL/cif")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/common/StateSaveAreaHeader.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc/common" TYPE FILE FILES "/home/harshit9745/Workspace-Code/igc/IGC/common/StateSaveAreaHeader.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  file( WRITE /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/tmp/postinst "/sbin/ldconfig
" )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  file( WRITE /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/tmp/postrm "/sbin/ldconfig
" )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  file( COPY /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/tmp/postinst DESTINATION /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  file( COPY /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/tmp/postrm DESTINATION /home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/pkgconfig/igc-opencl.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64/pkgconfig" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/AdaptorOCL/igc-opencl.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/igc/igc.opencl.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/igc" TYPE FILE FILES "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/AdaptorOCL/igc.opencl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-core" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/igc/NOTICES.txt")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64/igc" TYPE FILE FILES "/home/harshit9745/Workspace-Code/igc/IGC/../NOTICES.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/visa/RelocationInfo.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/visa" TYPE FILE FILES "/home/harshit9745/Workspace-Code/igc/IGC/../visa/include/RelocationInfo.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "igc-opencl-devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/iga/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/include/iga" TYPE DIRECTORY FILES "/home/harshit9745/Workspace-Code/igc/IGC/../visa/iga/IGALibrary/api/" FILES_MATCHING REGEX "/[^/]*\\.h[^/]*$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/autogen/MDAutogen/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/cif/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/WrapperLLVM/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/ZEBinWriter/zebin/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/PCH/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/common/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/GenISAIntrinsics/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/Options/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/CMFE/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VectorCompiler/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/DebugInfo/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/DriverInterface/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/BiFModule/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/ElfPackager/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/OCLFE/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/VISALinkerDriver/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/visa/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/harshit9745/Workspace-Code/build/intel-graphics-compiler/IGC/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
