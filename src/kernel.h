#include <CL/cl.h>
#include <stdio.h>
#include <stdlib.h>

// Your custom Quant struct
typedef struct {
    float price;
    int volume;
} MarketData;

int main() {
    cl_platform_id platform_id = NULL;
    cl_device_id device_id = NULL;
    cl_uint ret_num_devices;
    cl_uint ret_num_platforms;
    
    // 1. Get Platform (Rusticl)
    clGetPlatformIDs(1, &platform_id, &ret_num_platforms);
    
    // 2. Get Device (HD 620)
    clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_GPU, 1, &device_id, &ret_num_devices);
    
    // 3. Create Context
    cl_context context = clCreateContext(NULL, 1, &device_id, NULL, NULL, NULL);
    
    // 4. Create Command Queue
    cl_command_queue command_queue = clCreateCommandQueue(context, device_id, 0, NULL);