if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    add_example_executable(example_splitk_gemm_bias_e_permute_xdl_fp16 splitk_gemm_bias_e_permute_xdl_fp16.cpp)
endif()
if(DTYPES MATCHES "fp32" OR NOT DEFINED DTYPES)
    add_example_executable(example_splitk_gemm_bias_e_permute_xdl_fp32 splitk_gemm_bias_e_permute_xdl_fp32.cpp)
endif()
