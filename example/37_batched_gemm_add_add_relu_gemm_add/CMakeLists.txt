if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    add_example_executable(example_batched_gemm_add_add_relu_gemm_add_xdl_fp16 batched_gemm_add_add_relu_gemm_add_xdl_fp16.cpp)
endif()
