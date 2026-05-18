# Intel NEO/IGC — LLVM 22 Compatibility Port
### Target Hardware: Intel HD 620 (Kaby Lake, Gen 9.5)

> Porting the last Intel NEO + IGC release that supported HD 620 (Kaby Lake)
> to build and run on modern LLVM 22.x and current Linux kernels (Fedora 44+).

**Maintainer**: [@hsxtheemperor](https://github.com/hsxtheemperor)

---

## Project Structure

```
Workspace-Code/
├── igc/                  # Intel Graphics Compiler — main patch target
│   └── IGC/
│       ├── BiFModule/    # Built-in Function (BiF) OpenCL sources — Phase III work
│       ├── AdaptorOCL/   # OCL/SPIRV adapter layer
│       └── Compiler/     # IGC compiler passes
├── neo/                  # Intel compute-runtime (OpenCL/Level Zero runtime)
├── gmmlib/               # Graphics Memory Management library
├── SPIRV-Headers/        # SPIRV spec headers
├── SPIRV-Tools/          # SPIRV toolchain
├── vc-intrinsics/        # Vector Compiler intrinsics
├── build/                # CMake build directory
└── archive/              # Reference snapshots
```

---

## Background

Intel dropped active support for Kaby Lake (Gen 9.5 / HD 620) in newer NEO releases.
The last supported version of NEO + IGC was frozen at an older LLVM version (pre-17).

Modern Fedora (44+) ships **LLVM 22.x**, which introduced breaking changes that make
the old IGC BiF sources fail to compile. Additionally, newer kernels enforce stricter
memory semantics that expose latent bugs in the old codebase (e.g. `(uint)-1` used as
a memory size sentinel causing kernel OOM).

This project patches the old codebase to compile and run correctly on:
- **LLVM**: 22.1.4
- **Kernel**: Current Fedora 44 kernel
- **Clang**: System clang (SPIR target)
- **GPU**: Intel HD 620 — `spir` / `spir64` triple, Gen 9.5 ISA

---

## Porting Phases

### Phase I — Build System & CMake ✅
- Fixed CMakeLists.txt incompatibilities with LLVM 22 CMake APIs
- Updated find_package paths and LLVM component names
- Resolved target linking changes in LLVM 22

### Phase II — LLVM API Syntax & C++ Changes ✅
- Updated deprecated LLVM IR builder APIs
- Fixed `ConstantInt`, `IRBuilder`, and Pass infrastructure calls
- Resolved C++17/20 compatibility issues in IGC compiler C++ sources

### Phase III — BiF Module (OpenCL Built-in Functions) 🔧 In Progress
The BiF module compiles OpenCL `.cl` sources to LLVM bitcode using clang.
LLVM 17+ introduced **opaque pointer types** and **target extension types**
for SPIRV handles, breaking old bitcast patterns throughout the BiF sources.

#### Fixes Applied

**3.1 — `spirv.DeviceEvent` Invalid Bitcast** ✅
- **Root cause**: `IGIL_EVENT_INVALID_HANDLE` defined as `0xffffffff` in
  `DeviceEnqueueInternalTypes.h`, then cast as a pointer address into `clk_event_t`
  and `__spirv_DeviceEvent`. LLVM 22 rejects `bitcast` between `target("spirv.DeviceEvent")`
  and `i32` entirely.
- **Files fixed**:
  - `IGC/BiFModule/Languages/OpenCL/PointerSize/IBiF_Device_Enqueue_size_t.cl`
  - `IGC/BiFModule/Languages/OpenCL/IBiF_Device_Enqueue.cl`
- **Fix**: Replaced all pointer-cast usages of `IGIL_EVENT_INVALID_HANDLE`
  with `0` (null pointer). Integer-only usages (plain `int eventIndex`) left unchanged.

**3.2 — `spirv.Event` Invalid Bitcast (ASYNC_COPY macro)** 🔧
- **Root cause**: `ASYNC_COPY` / `ASYNC_COPY_S` macros in `IBiF_size_t.cl`
  cast `event_t` ↔ `i32` internally. `target("spirv.Event")` is opaque in LLVM 22.
- **Files**: `IGC/BiFModule/Languages/OpenCL/PointerSize/IBiF_size_t.cl`
- **Status**: In progress

**3.3 — `spirv.Image` Invalid Bitcast** 🔧
- **Root cause**: Image handle types (`spirv.Image<...>`) being bitcast to `i32`
  in image builtin implementations.
- **Status**: In progress

**3.4 — `atomics.cl` Pointer Type Mismatch** 🔧
- **Root cause**: `__builtin_IB_atomic_inc_global_i64` called with `__global int*`
  instead of required `__global long*` at line 1031.
- **Status**: In progress

**3.5 — `assert.cl` Address Space Mismatch** 🔧
- **Root cause**: `__builtin_IB_get_assert_buffer()` returns `volatile __global uchar*`
  but assigned to `__generic AssertBufferHeader*` without cast.
- **Status**: In progress

---

## Key Concepts for Contributors

### Why `target("spirv.X")` types cannot be bitcast to integers

In LLVM 16+, SPIRV opaque handle types (`DeviceEvent`, `Event`, `Queue`, `Image`, etc.)
are represented as **target extension types** (`target("spirv.DeviceEvent")` etc.).
These have **no integer representation** at the IR level — they are truly opaque.

Old IGC code assumed these were secretly `i32` or `i64` handles and freely bitcast
between them and integers. LLVM 22's verifier hard-rejects this.

**Rule**: Never cast opaque handle types to/from integers. Use `__builtin_astype`
only between pointer-compatible opaque types. Use `0` / null instead of `-1` / `0xffffffff`
as invalid sentinels for pointer-typed handles.

### LLVM Type Mapping

| OpenCL Type         | Old LLVM IR        | New LLVM 22 IR                        |
|---------------------|--------------------|---------------------------------------|
| `event_t`           | `i32` / `i64`      | `target("spirv.Event")`               |
| `clk_event_t`       | `i32*` (private)   | `target("spirv.DeviceEvent")`         |
| `queue_t`           | `i32`              | `target("spirv.Queue")`               |
| `image2d_t`         | `i32`              | `target("spirv.Image", void, ...)`    |

---

## Build Instructions

```bash
# Dependencies (Fedora 44)
sudo dnf install llvm llvm-devel clang clang-devel cmake ninja-build \
                 libva-devel libdrm-devel zlib-devel

# Configure
cd Workspace-Code
cmake -G Ninja -B build \
  -DCMAKE_BUILD_TYPE=Release \
  -DLLVM_DIR=/usr/lib64/cmake/llvm

# Build IGC (main patch target)
cd build
ninja -j2 igc_dll

# Build full stack
ninja -j$(nproc)
```

---

## Known Issues / Notes

- Build uses `-j2` to avoid OOM on machines with limited RAM during BiF compilation
- The old `(uint)-1` / `0xffffffff` sentinel pattern appears in multiple files —
  always check whether the usage is integer-only (safe) or pointer-cast (must fix)
- `IBiF_size_t.cl` compiles once per vector type variant — a single macro bug
  produces hundreds of identical IR errors in the build log
- SPIRV Image types carry parameters in the type signature itself
  (`target("spirv.Image", void, 0, 0, 1, 0, 0, 0, 0)`) — each variant is a
  distinct type and all must be handled without bitcast

---

## License

This project is a patch/port of Intel Graphics Compiler (IGC) and Intel NEO
compute-runtime, both licensed under the [MIT License](LICENSE.md).

All modifications in this repository are released under the same MIT license terms.
Original copyright headers in modified files are preserved as required.

Commits follow the [Developer Certificate of Origin (DCO)](https://developercertificate.org/)
and are signed off as:
```
Signed-off-by: Harshit Saha <your@email.com>
```

---

## References

- [Intel NEO compute-runtime](https://github.com/intel/compute-runtime)
- [Intel Graphics Compiler (IGC)](https://github.com/intel/intel-graphics-compiler)
- [LLVM Target Extension Types (LangRef)](https://llvm.org/docs/LangRef.html#target-type)
- [LLVM Opaque Pointer Migration](https://llvm.org/docs/OpaquePointers.html)
- [SPIRV-LLVM Translator](https://github.com/KhronosGroup/SPIRV-LLVM-Translator)