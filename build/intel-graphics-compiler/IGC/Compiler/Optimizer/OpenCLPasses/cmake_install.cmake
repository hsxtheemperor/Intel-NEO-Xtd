# Install script for directory: /home/harshit9745/SFXFolder/Workspace-Code/igc/IGC/Compiler/Optimizer/OpenCLPasses

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/AccuracyDecoratedCallsBiFResolution/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/AddressSpaceAliasAnalysis/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/AggregateArguments/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/AlignmentAnalysis/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/Atomics/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/BIFTransforms/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/BreakConstantExpr/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/BreakdownIntrinsic/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/CorrectlyRoundedDivSqrt/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/DeviceEnqueueFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/DisableLoopUnrollOnRetry/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/DpasFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/BfloatFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ErrorCheckPass/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ExtensionFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/GEPLoopStrengthReduction/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/GenericAddressResolution/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/HandleDevicelibAssert/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/Image3dToImage2darray/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ImageFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/JointMatrixFuncsResolutionPass/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/KernelArgs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/KernelFunctionCloning/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/BufferBoundsChecking/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/LSCFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/Decompose2DBlockFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/LocalBuffers/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/MinimumValidAddressChecking/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/NamedBarriers/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/NontemporalLoadsAndStoresInAssert/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/OpenCLPrintf/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/PoisonFP64KernelsPass/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/PrivateMemory/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ProgramScopeConstants/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/RayTracing/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ReplaceUnsupportedIntrinsics/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ResourceAllocator/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/RewriteLocalSize/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/ScalarArgAsPointer/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/SetFastMathFlags/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/StackOverflowDetection/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/StatelessToStateful/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/SubGroupFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/SubGroupReductionPattern/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/TransformUnmaskedFunctionsPass/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/UndefinedReferences/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/UnreachableHandling/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/WGFuncs/cmake_install.cmake")
  include("/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/WIFuncs/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/Compiler/Optimizer/OpenCLPasses/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
