#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl.h>
#include <stdio.h>
#include <stdlib.h>

// This is the "Loop Complexity" kernel that usually triggers IGC bad_alloc
const char* test_kernel_src = 
"kernel void diagnostic_test(global float* out, int depth) {"
"    int id = get_global_id(0);"
"    float val = 150.0f;"
"    for(int i=0; i < depth; i++) {"
"        val = val * 1.0001f;" // Aggressive math
"    }"
"    out[id] = val;"
"}";

void check_err(cl_int err, const char* name) {
    if (err != CL_SUCCESS) {
        printf("[ERROR] %s failed with code %d\n", name, err);
        exit(1);
    }
}

int main() {
    cl_int err;
    cl_platform_id platform;
    cl_device_id device;

    // 1. Grab Platform 0 (Should be Intel NEO now)
    clGetPlatformIDs(1, &platform, NULL);
    clGetDeviceIDs(platform, CL_DEVICE_TYPE_GPU, 1, &device, NULL);

    char p_name[128];
    clGetPlatformInfo(platform, CL_PLATFORM_NAME, sizeof(p_name), p_name, NULL);
    printf("[INFO] Platform: %s\n", p_name);

    // 2. Create Context
    cl_context ctx = clCreateContext(NULL, 1, &device, NULL, NULL, &err);
    check_err(err, "Context Creation");

    // 3. ATTEMPT COMPILATION (The 'std::bad_alloc' Danger Zone)
    printf("[INFO] Attempting to compile diagnostic kernel...\n");
    cl_program program = clCreateProgramWithSource(ctx, 1, &test_kernel_src, NULL, &err);
    
    // Using aggressive flags as requested
    err = clBuildProgram(program, 1, &device, "-cl-mad-enable -cl-fast-relaxed-math", NULL, NULL);

    if (err != CL_SUCCESS) {
        printf("[BUILD FAILED]\n");
        size_t log_size;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, 0, NULL, &log_size);
        char* log = malloc(log_size);
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, log_size, log, NULL);
        printf("Log: %s\n", log);
        free(log);
        return 1;
    }

    printf("[SUCCESS] Kernel compiled perfectly on NEO!\n");

    // Cleanup
    clReleaseProgram(program);
    clReleaseContext(ctx);
    return 0;
}