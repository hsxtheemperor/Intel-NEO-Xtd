#bin/bash

cd /home/harshit9745/Workspace-Code

# 1. Clean up the accidental in-source build artifacts
rm -rf CMakeCache.txt CMakeFiles/
rm -rf build/*

# 2. Create and jump into your isolated build tree
mkdir -p build && cd build

# 3. Configure from within the build folder, pointing back to the master CMakeLists.txt
cmake -G Ninja ..

# 4. Run Ninja to build the project
ninja -j2 &2>1 | tee build.log