/*========================== begin_copyright_notice ============================
Copyright (C) 2024 Intel Corporation
Author: Harshit Saha <
Copyright (C) 2026 Harshit Saha (Independent)
SPDX-License-Identifier: MIT
============================= end_copyright_notice ===========================*/

#ifndef __IGC_BRIDGE_BUILTINS_H__
#define __IGC_BRIDGE_BUILTINS_H__
#ifdef __clang__

#include <stdint.h>
#include "spirv_types.h"

// ================================================================
// SECTION 1: To-handle bridge — everything -> raw uintptr_t
// ================================================================

// --- Scalars ---
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(char v)            { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(unsigned char v)   { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(short v)           { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(unsigned short v)  { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(int v)             { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(unsigned int v)    { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(long v)            { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(unsigned long v)   { return (uintptr_t)v; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(float v)  { return (uintptr_t)__builtin_bit_cast(uint, v); }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(double v) { return (uintptr_t)__builtin_bit_cast(ulong, v); }
#ifdef cl_khr_fp16
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(half v) { return (uintptr_t)__builtin_bit_cast(ushort, v); }
#endif

// --- Pointers (all address spaces) ---
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(__global   void* p) { return (uintptr_t)p; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(__private  void* p) { return (uintptr_t)p; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(__local    void* p) { return (uintptr_t)p; }
__attribute__((overloadable)) static inline uintptr_t intel_bridge_to_handle(__constant void* p) { return (uintptr_t)p; }

// --- Opaque types (backend lowers these) ---
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(event_t event);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(clk_event_t event);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(queue_t queue);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__spirv_Event event);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__spirv_DeviceEvent event);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__spirv_Queue queue);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__spirv_Image img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__spirv_ReserveId r);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(reserve_id_t r);

// --- Image types ---
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image1d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image1d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image1d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image1d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image1d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image1d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image1d_buffer_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image1d_buffer_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image1d_buffer_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_array_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_array_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_array_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_array_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_array_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_array_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_array_msaa_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image2d_array_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image2d_array_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image2d_array_msaa_depth_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_only   image3d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__write_only  image3d_t img);
__attribute__((overloadable)) uintptr_t intel_bridge_to_handle(__read_write  image3d_t img);


// ================================================================
// SECTION 2: From-handle bridge — uintptr_t -> opaque type
// ================================================================
__attribute__((overloadable)) event_t             intel_bridge_from_handle_event        (uintptr_t h);
__attribute__((overloadable)) clk_event_t         intel_bridge_from_handle_clk_event    (uintptr_t h);
__attribute__((overloadable)) queue_t             intel_bridge_from_handle_queue         (uintptr_t h);
__attribute__((overloadable)) __spirv_Event       intel_bridge_from_handle_spirv_event   (uintptr_t h);
__attribute__((overloadable)) __spirv_DeviceEvent intel_bridge_from_handle_device_event  (uintptr_t h);
__attribute__((overloadable)) __spirv_Image       intel_bridge_from_handle_image         (uintptr_t h);
__attribute__((overloadable)) __spirv_ReserveId intel_bridge_from_handle_spirv_reserve_id(uintptr_t h);
__attribute__((overloadable)) reserve_id_t intel_bridge_from_handle_reserve_id(uintptr_t h);

// ================================================================
// SECTION 3: __igc_astype overloads
//
// One overload per (src, dst) pair for opaque/pointer types.
// For all scalar and vector same-size bitcasts, a single template-
// style macro covers every combination via __builtin_bit_cast.
// The macro dispatches here via overload resolution — NO _Generic.
// ================================================================

// --- Opaque <-> opaque ---
__attribute__((overloadable)) static inline
event_t __igc_astype(__spirv_Event e, __private event_t* /*sel*/) {
    return intel_bridge_from_handle_event(intel_bridge_to_handle(e));
}
__attribute__((overloadable)) static inline
__spirv_Event __igc_astype(event_t e, __private __spirv_Event* /*sel*/) {
    return intel_bridge_from_handle_spirv_event(intel_bridge_to_handle(e));
}
__attribute__((overloadable)) static inline
__spirv_Event __igc_astype(clk_event_t e, __private __spirv_Event* /*sel*/) {
    return intel_bridge_from_handle_spirv_event(intel_bridge_to_handle(e));
}
__attribute__((overloadable)) static inline
clk_event_t __igc_astype(__spirv_Event e, __private clk_event_t* /*sel*/) {
    return intel_bridge_from_handle_clk_event(intel_bridge_to_handle(e));
}
__attribute__((overloadable)) static inline
clk_event_t __igc_astype(event_t e, __private clk_event_t* /*sel*/) {
    return intel_bridge_from_handle_clk_event(intel_bridge_to_handle(e));
}

__attribute__((overloadable)) static inline
queue_t __igc_astype(__spirv_DeviceEvent e, __private queue_t* /*sel*/) {
    return intel_bridge_from_handle_queue(intel_bridge_to_handle(e));
}

__attribute__((overloadable)) static inline
queue_t __igc_astype(__spirv_Queue q, __private queue_t* /*sel*/) {
    return intel_bridge_from_handle_queue(intel_bridge_to_handle(q));
}

__attribute__((overloadable)) static inline
__spirv_DeviceEvent __igc_astype(queue_t q, __private __spirv_DeviceEvent* /*sel*/) {
    return intel_bridge_from_handle_device_event(intel_bridge_to_handle(q));
}

__attribute__((overloadable)) static inline
__spirv_Sampler __igc_astype(ulong v, __private __spirv_Sampler* /*sel*/) {
    return (__spirv_Sampler)(__constant void*)v;
}
__attribute__((overloadable)) static inline
__spirv_DeviceEvent __igc_astype(__private void* p, __private __spirv_DeviceEvent* /*sel*/) {
    return (__spirv_DeviceEvent)p;
}
__attribute__((overloadable)) static inline
__private void* __igc_astype(__spirv_DeviceEvent e, __private __private void** /*sel*/) {
    return (__private void*)e;
}

// Pointer -> integer casts
__attribute__((overloadable)) static inline
long __igc_astype(__global void* p, __private long* /*sel*/) {
    return (long)(uintptr_t)p;
}
__attribute__((overloadable)) static inline
ulong __igc_astype(__global void* p, __private ulong* /*sel*/) {
    return (ulong)(uintptr_t)p;
}
__attribute__((overloadable)) static inline
long __igc_astype(__local void* p, __private long* /*sel*/) {
    return (long)(uintptr_t)p;
}
__attribute__((overloadable)) static inline
long __igc_astype(__private void* p, __private long* /*sel*/) {
    return (long)(uintptr_t)p;
}
__attribute__((overloadable)) static inline
long __igc_astype(__generic void* p, __private long* /*sel*/) {
    return (long)(uintptr_t)p;
}

// Pipe type casts — use __builtin_astype directly since pipes can't
// go through pointer selectors
__attribute__((overloadable)) static inline
__spirv_Pipe_ro __igc_astype_pipe_ro(__generic void* p) {
    return (__spirv_Pipe_ro)p;
}
__attribute__((overloadable)) static inline
__spirv_Pipe_wo __igc_astype_pipe_wo(__generic void* p) {
    return (__spirv_Pipe_wo)p;
}

__attribute__((overloadable)) static inline
long __igc_astype(int2 v, __private long* /*sel*/) {
    return __builtin_bit_cast(long, v);
}

__attribute__((overloadable)) static inline
double __igc_astype(uint2 v, __private double* /*sel*/) {
    return __builtin_bit_cast(double, v);
}

__attribute__((overloadable)) static inline
int2 __igc_astype(double v, __private int2* /*sel*/) {
    return __builtin_bit_cast(int2, v);
}

// Cross-width: 4-byte vector -> int/uint (for dot product)
__attribute__((overloadable)) static inline
int __igc_astype(uchar4 v, __private int* /*sel*/) {
    return __builtin_bit_cast(int, v);
}
__attribute__((overloadable)) static inline
int __igc_astype(char4 v, __private int* /*sel*/) {
    return __builtin_bit_cast(int, v);
}
__attribute__((overloadable)) static inline
int __igc_astype(ushort2 v, __private int* /*sel*/) {
    return __builtin_bit_cast(int, v);
}
__attribute__((overloadable)) static inline
int __igc_astype(short2 v, __private int* /*sel*/) {
    return __builtin_bit_cast(int, v);
}
__attribute__((overloadable)) static inline
uint __igc_astype(uchar4 v, __private uint* /*sel*/) {
    return __builtin_bit_cast(uint, v);
}
__attribute__((overloadable)) static inline
uint __igc_astype(ushort2 v, __private uint* /*sel*/) {
    return __builtin_bit_cast(uint, v);
}

__attribute__((overloadable)) static inline
ushort2 __igc_astype(uint v, __private ushort2* /*sel*/) {
    return __builtin_bit_cast(ushort2, v);
}

#ifdef cl_khr_fp16
__attribute__((overloadable)) static inline
half2 __igc_astype(uint v, __private half2* /*sel*/) {
    return __builtin_bit_cast(half2, v);
}

__attribute__((overloadable)) static inline
half2 __igc_astype(int v, __private half2* /*sel*/) {
    return __builtin_bit_cast(half2, v);
}

__attribute__((overloadable)) static inline
uint8 __igc_astype(half16 v, __private uint8* /*sel*/) {
    return __builtin_bit_cast(uint8, v);
}

__attribute__((overloadable)) static inline
uint __igc_astype(half2 v, __private uint* /*sel*/) {
    return __builtin_bit_cast(uint, v);
}

#endif

// --- Scalar same-size bitcast pairs ---
// Every as_TYPE() macro expands to __builtin_astype(x, TYPE)
// which expands to __igc_astype(x, (__private TYPE*)0).
// __builtin_bit_cast requires same size — guaranteed by OpenCL spec
// for as_type() on same-size types.

#define __IGC_SCALAR_BITCAST(src_t, dst_t)                                \
__attribute__((overloadable)) static inline                               \
dst_t __igc_astype(src_t v, __private dst_t* /*sel*/) {                  \
    return __builtin_bit_cast(dst_t, v);                                  \
}

// 1-byte
__IGC_SCALAR_BITCAST(char,   uchar)
__IGC_SCALAR_BITCAST(uchar,  char)

// 2-byte
__IGC_SCALAR_BITCAST(short,  ushort)
__IGC_SCALAR_BITCAST(ushort, short)
#ifdef cl_khr_fp16
__IGC_SCALAR_BITCAST(half,   ushort)
__IGC_SCALAR_BITCAST(ushort, half)
__IGC_SCALAR_BITCAST(half,   short)
__IGC_SCALAR_BITCAST(short,  half)
__IGC_SCALAR_BITCAST(half,   half)
#endif

// 4-byte
__IGC_SCALAR_BITCAST(int,    uint)
__IGC_SCALAR_BITCAST(uint,   int)
__IGC_SCALAR_BITCAST(float,  uint)
__IGC_SCALAR_BITCAST(uint,   float)

// Signed->float routes through uint to avoid ambiguity
__attribute__((overloadable)) static inline
float __igc_astype(int v, __private float* /*sel*/) {
    return __builtin_bit_cast(float, (uint)v);
}
__attribute__((overloadable)) static inline
int __igc_astype(float v, __private int* /*sel*/) {
    return (int)__builtin_bit_cast(uint, v);
}

// 8-byte
__IGC_SCALAR_BITCAST(long,   ulong)
__IGC_SCALAR_BITCAST(ulong,  long)
__IGC_SCALAR_BITCAST(double, ulong)
__IGC_SCALAR_BITCAST(ulong,  double)

// Signed->double routes through ulong to avoid ambiguity
__attribute__((overloadable)) static inline
double __igc_astype(long v, __private double* /*sel*/) {
    return __builtin_bit_cast(double, (ulong)v);
}
__attribute__((overloadable)) static inline
long __igc_astype(double v, __private long* /*sel*/) {
    return (long)__builtin_bit_cast(ulong, v);
}

// Identity casts (same type, Clang may generate these)
__IGC_SCALAR_BITCAST(char,   char)
__IGC_SCALAR_BITCAST(uchar,  uchar)
__IGC_SCALAR_BITCAST(short,  short)
__IGC_SCALAR_BITCAST(ushort, ushort)
__IGC_SCALAR_BITCAST(int,    int)
__IGC_SCALAR_BITCAST(uint,   uint)
__IGC_SCALAR_BITCAST(float,  float)
__IGC_SCALAR_BITCAST(long,   long)
__IGC_SCALAR_BITCAST(ulong,  ulong)
__IGC_SCALAR_BITCAST(double, double)

// --- Vector same-size bitcast pairs ---
// Same principle: OpenCL only allows as_typeN() between same-total-size types.
// We cover all vector widths (2,3,4,8,16) for each element type.

#define __IGC_VEC_BITCAST(src_t, dst_t, n)                                \
__attribute__((overloadable)) static inline                               \
dst_t##n __igc_astype(src_t##n v, __private dst_t##n* /*sel*/) {         \
    return __builtin_bit_cast(dst_t##n, v);                               \
}

// Generate all widths for a src/dst pair
#define __IGC_VEC_BITCAST_ALL(src_t, dst_t)   \
    __IGC_VEC_BITCAST(src_t, dst_t, 2)        \
    __IGC_VEC_BITCAST(src_t, dst_t, 3)        \
    __IGC_VEC_BITCAST(src_t, dst_t, 4)        \
    __IGC_VEC_BITCAST(src_t, dst_t, 8)        \
    __IGC_VEC_BITCAST(src_t, dst_t, 16)

// char/uchar vectors
__IGC_VEC_BITCAST_ALL(char,   uchar)
__IGC_VEC_BITCAST_ALL(uchar,  char)
__IGC_VEC_BITCAST_ALL(char,   char)
__IGC_VEC_BITCAST_ALL(uchar,  uchar)

// short/ushort/half vectors
__IGC_VEC_BITCAST_ALL(short,  ushort)
__IGC_VEC_BITCAST_ALL(ushort, short)
#ifdef cl_khr_fp16
 __IGC_VEC_BITCAST_ALL(short,  half)
 __IGC_VEC_BITCAST_ALL(half,   short)
 __IGC_VEC_BITCAST_ALL(ushort, half)
 __IGC_VEC_BITCAST_ALL(half,   ushort)
 __IGC_VEC_BITCAST_ALL(short,  short)
 __IGC_VEC_BITCAST_ALL(ushort, ushort)
 __IGC_VEC_BITCAST_ALL(half,   half)
 __IGC_VEC_BITCAST(half, uint, 8)   // half16 -> uint8 (both 32 bytes)
 __IGC_VEC_BITCAST(uint, half, 8)
#endif

// int/uint/float vectors — explicit signed variants to avoid ambiguity
__IGC_VEC_BITCAST_ALL(int,    uint)
__IGC_VEC_BITCAST_ALL(uint,   int)
__IGC_VEC_BITCAST_ALL(uint,   float)
__IGC_VEC_BITCAST_ALL(float,  uint)
__IGC_VEC_BITCAST_ALL(int,    int)
__IGC_VEC_BITCAST_ALL(uint,   uint)
__IGC_VEC_BITCAST_ALL(float,  float)

// Signed<->float vectors route through uint
#define __IGC_VEC_FLOAT_INT_BITCAST(n)                                         \
__attribute__((overloadable)) static inline                                    \
float##n __igc_astype(int##n v, __private float##n* /*sel*/) {                \
    return __builtin_bit_cast(float##n, __builtin_bit_cast(uint##n, v));      \
}                                                                              \
__attribute__((overloadable)) static inline                                    \
int##n __igc_astype(float##n v, __private int##n* /*sel*/) {                  \
    return __builtin_bit_cast(int##n, __builtin_bit_cast(uint##n, v));        \
}

__IGC_VEC_FLOAT_INT_BITCAST(2)
__IGC_VEC_FLOAT_INT_BITCAST(3)
__IGC_VEC_FLOAT_INT_BITCAST(4)
__IGC_VEC_FLOAT_INT_BITCAST(8)
__IGC_VEC_FLOAT_INT_BITCAST(16)

// long/ulong/double vectors
__IGC_VEC_BITCAST_ALL(long,   ulong)
__IGC_VEC_BITCAST_ALL(ulong,  long)
__IGC_VEC_BITCAST_ALL(ulong,  double)
__IGC_VEC_BITCAST_ALL(double, ulong)
__IGC_VEC_BITCAST_ALL(long,   long)
__IGC_VEC_BITCAST_ALL(ulong,  ulong)
__IGC_VEC_BITCAST_ALL(double, double)

#define __IGC_VEC_DOUBLE_LONG_BITCAST(n)                                       \
__attribute__((overloadable)) static inline                                    \
double##n __igc_astype(long##n v, __private double##n* /*sel*/) {             \
    return __builtin_bit_cast(double##n, __builtin_bit_cast(ulong##n, v));    \
}                                                                              \
__attribute__((overloadable)) static inline                                    \
long##n __igc_astype(double##n v, __private long##n* /*sel*/) {               \
    return __builtin_bit_cast(long##n, __builtin_bit_cast(ulong##n, v));      \
}

__IGC_VEC_DOUBLE_LONG_BITCAST(2)
__IGC_VEC_DOUBLE_LONG_BITCAST(3)
__IGC_VEC_DOUBLE_LONG_BITCAST(4)
__IGC_VEC_DOUBLE_LONG_BITCAST(8)
__IGC_VEC_DOUBLE_LONG_BITCAST(16)

// Cross-width bitcasts: scalar <-> vector (same total bytes)
// 8-byte scalar <-> 2x4-byte vector
__attribute__((overloadable)) static inline
int2 __igc_astype(ulong v, __private int2* /*sel*/) {
    return __builtin_bit_cast(int2, v);
}
__attribute__((overloadable)) static inline
uint2 __igc_astype(ulong v, __private uint2* /*sel*/) {
    return __builtin_bit_cast(uint2, v);
}
__attribute__((overloadable)) static inline
uint2 __igc_astype(long v, __private uint2* /*sel*/) {
    return __builtin_bit_cast(uint2, v);
}
__attribute__((overloadable)) static inline
int2 __igc_astype(long v, __private int2* /*sel*/) {
    return __builtin_bit_cast(int2, v);
}
__attribute__((overloadable)) static inline
ulong __igc_astype(int2 v, __private ulong* /*sel*/) {
    return __builtin_bit_cast(ulong, v);
}
__attribute__((overloadable)) static inline
ulong __igc_astype(uint2 v, __private ulong* /*sel*/) {
    return __builtin_bit_cast(ulong, v);
}
__attribute__((overloadable)) static inline
double __igc_astype(int2 v, __private double* /*sel*/) {
    return __builtin_bit_cast(double, v);
}

// Cross-size vector bitcasts (same total bytes, different element type/width)
// e.g. as_int(char4), as_float2(int4), as_long(int2), etc.
// These are valid OpenCL as_type() calls when total sizes match.
// Covered by same-width vector pairs above for common cases.
// Add specific cross-width pairs here as the build reveals them.

// --- image* -> __global void* ---

// Sentinel types for selector dispatch
typedef struct __igc_image_sel_tag {} __igc_image_sel_t;

#define DECLARE_IMAGE_ASTYPE(img_type)                                         \
__attribute__((overloadable)) static inline                                    \
__global void* __igc_astype(img_type img, __private void* __generic* /*sel*/) { \
    return (__global void*)(uintptr_t)intel_bridge_to_handle(img);             \
}


DECLARE_IMAGE_ASTYPE(__read_only   image1d_t)
DECLARE_IMAGE_ASTYPE(__write_only  image1d_t)
DECLARE_IMAGE_ASTYPE(__read_write  image1d_t)
DECLARE_IMAGE_ASTYPE(__read_only   image1d_array_t)
DECLARE_IMAGE_ASTYPE(__write_only  image1d_array_t)
DECLARE_IMAGE_ASTYPE(__read_write  image1d_array_t)
DECLARE_IMAGE_ASTYPE(__read_only   image1d_buffer_t)
DECLARE_IMAGE_ASTYPE(__write_only  image1d_buffer_t)
DECLARE_IMAGE_ASTYPE(__read_write  image1d_buffer_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_array_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_array_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_array_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_depth_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_depth_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_depth_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_array_depth_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_array_depth_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_array_depth_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_msaa_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_msaa_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_msaa_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_array_msaa_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_array_msaa_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_array_msaa_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__read_only   image2d_array_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__write_only  image2d_array_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__read_write  image2d_array_msaa_depth_t)
DECLARE_IMAGE_ASTYPE(__read_only   image3d_t)
DECLARE_IMAGE_ASTYPE(__write_only  image3d_t)
DECLARE_IMAGE_ASTYPE(__read_write  image3d_t)


// ================================================================
// SECTION 4: __builtin_astype macro override
//
// Single-line overload dispatch — NO _Generic.
// Clang resolves the correct __igc_astype overload at compile time.
// Only that one overload body is compiled — no cross-branch
// type-checking, no size mismatch errors from unrelated branches.
//
// The (__private to_type*)0 selector works because:
//   __builtin_astype(x, half)         -> (__private half*)0        -> scalar overload
//   __builtin_astype(x, float2)       -> (__private float2*)0      -> vector overload
//   __builtin_astype(x, event_t)      -> (__private event_t*)0     -> opaque overload
//   __builtin_astype(x, __global void*)-> (__private __global void**)0 -> image overload
// ================================================================

// Save native __builtin_astype for pipe casts before we override it
#define __igc_native_astype_pipe_ro(p) __builtin_astype(p, __spirv_Pipe_ro)
#define __igc_native_astype_pipe_wo(p) __builtin_astype(p, __spirv_Pipe_wo)
#define __igc_avc_astype(val, to_type) __builtin_astype(val, to_type)
#undef __builtin_astype
#define __builtin_astype(val, to_type) \
    __igc_astype((val), (__private to_type*)0)

#define __builtin_astype_to_global_void_ptr(img) \
    ((__global void*)(uintptr_t)intel_bridge_to_handle(img))

#define __builtin_astype_to_generic_char_ptr(p) \
    ((__generic char*)(p))

#endif // __clang__
#endif // __IGC_BRIDGE_BUILTINS_H__
