# Install script for directory: /home/harshit9745/Workspace-Code/build/igc/visa/iga/IGALibrary

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
      "$ENV{DESTDIR}/usr/local/lib64/libiga64.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libiga64.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/libiga64.so.1.0.1;/usr/local/lib64/libiga64.so.1")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES
    "/home/harshit9745/SFXFolder/Workspace-Code/build/igc/build/IGC/Release/libiga64.so.1.0.1"
    "/home/harshit9745/SFXFolder/Workspace-Code/build/igc/build/IGC/Release/libiga64.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/local/lib64/libiga64.so.1.0.1"
      "$ENV{DESTDIR}/usr/local/lib64/libiga64.so.1"
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
   "/usr/local/lib64/libiga64.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/lib64" TYPE SHARED_LIBRARY FILES "/home/harshit9745/SFXFolder/Workspace-Code/build/igc/build/IGC/Release/libiga64.so")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/api/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/Backend/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/Frontend/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/IR/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/MemManager/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/Models/cmake_install.cmake")
  include("/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/Timer/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/iga/IGALibrary/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
