if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    add_example_executable(example_gemm_bias_e_permute_g1m3n2k1_xdl_fp16 gemm_bias_e_permute_g1m3n2k1_xdl_fp16.cpp)
    add_example_executable(example_gemm_bias_e_permute_g1m2n3k1_xdl_fp16 gemm_bias_e_permute_g1m2n3k1_xdl_fp16.cpp)
endif()
