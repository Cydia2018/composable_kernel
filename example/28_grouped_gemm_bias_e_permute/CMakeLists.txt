if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    add_example_executable(example_grouped_gemm_bias_e_permute_xdl_fp16 grouped_gemm_bias_e_permute_xdl_fp16.cpp)
endif()
