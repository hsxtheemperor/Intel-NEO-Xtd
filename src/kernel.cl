// TEST 1: Register Pressure (Math Heavy)
kernel void test_math(global float* out) {
    float x = get_global_id(0) * 0.1f;
    for(int i=0; i<100; i++) {
        x = sin(x) * cos(x) + tan(x); // Heavy trig
    }
    out[get_global_id(0)] = x;
}

// TEST 2: Loop Complexity (Branching)
kernel void test_loop(global float* out, int depth) {
    float val = 150.0f;
    for(int i=0; i<depth; i++) {
        if(val > 200.0f) val -= 1.0f;
        else val += 1.1f;
    }
    out[get_global_id(0)] = val;
}

// TEST 3: Memory Latency (Global Access)
kernel void test_mem(global float* out, global float* in) {
    int id = get_global_id(0);
    out[id] = in[id] * 2.0f;
}