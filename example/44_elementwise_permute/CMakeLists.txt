if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    add_example_executable(example_elementwise_permute_4D_fp16 elementwise_permute_4D_fp16.cpp)
    add_example_executable(example_elementwise_permute_4D_fp16_2d elementwise_permute_4D_fp16_2d.cpp)
endif()
