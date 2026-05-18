# Fedora 44 Compatibility Overwrite
find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED CONFIG)

list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
include(AddLLVM)
include(TableGen)

set(LLVM_TABLEGEN_EXE "/usr/bin/llvm-tblgen")

# Force these variables so they are never empty
set(CLANG_EXECUTABLE "/usr/bin/clang" CACHE FILEPATH "" FORCE)
set(LLVM_LINK_EXECUTABLE "/usr/bin/llvm-link" CACHE FILEPATH "" FORCE)

message(STATUS "[IGC] Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "[IGC] Hardcoded tool paths for BiF generation")

set(IGC_LLVM_PACKAGE_DIR ${LLVM_INSTALL_PREFIX})
include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
set(IGC_LLVM_VERSION_MAJOR ${LLVM_VERSION_MAJOR})
