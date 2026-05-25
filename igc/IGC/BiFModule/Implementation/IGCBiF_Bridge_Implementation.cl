#include "../Headers/spirv.h"

// ================================================================
// Bridge Implementation — opaque type <-> uintptr_t
// All SPIRV opaque types are typed pointers under the hood.
// Direct pointer casts — no memcpy, no asm, no UB.
// ================================================================

// --- to-handle ---

__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(event_t event) {
    return (uintptr_t)(__private void*)event;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(clk_event_t event) {
    return (uintptr_t)(__private void*)event;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(queue_t queue) {
    return (uintptr_t)(__private void*)queue;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(__spirv_Event event) {
    return (uintptr_t)(__private void*)event;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(__spirv_DeviceEvent event) {
    return (uintptr_t)(__private void*)event;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(__spirv_Queue queue) {
    return (uintptr_t)(__private void*)queue;
}
__attribute__((overloadable))
uintptr_t intel_bridge_to_handle(__spirv_Image img) {
    return (uintptr_t)(__global void*)img;
}

// --- from-handle ---

__attribute__((overloadable))
event_t intel_bridge_from_handle_event(uintptr_t h) {
    return (event_t)(__private void*)h;
}
__attribute__((overloadable))
clk_event_t intel_bridge_from_handle_clk_event(uintptr_t h) {
    return (clk_event_t)(__private void*)h;
}
__attribute__((overloadable))
queue_t intel_bridge_from_handle_queue(uintptr_t h) {
    return (queue_t)(__private void*)h;
}
__attribute__((overloadable))
__spirv_Event intel_bridge_from_handle_spirv_event(uintptr_t h) {
    return (__spirv_Event)(__private void*)h;
}
__attribute__((overloadable))
__spirv_DeviceEvent intel_bridge_from_handle_device_event(uintptr_t h) {
    return (__spirv_DeviceEvent)(__private void*)h;
}
__attribute__((overloadable))
__spirv_Image intel_bridge_from_handle_image(uintptr_t h) {
    return (__spirv_Image)(__global void*)h;
}