if(DTYPES MATCHES "fp32" OR NOT DEFINED DTYPES)
add_test_executable(test_gemm_fp32 gemm_fp32.cpp)
target_link_libraries(test_gemm_fp32 PRIVATE utility)
target_link_libraries(test_gemm_fp32 PRIVATE device_gemm_instance)
endif()
if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
add_test_executable(test_gemm_fp16 gemm_fp16.cpp)
target_link_libraries(test_gemm_fp16 PRIVATE utility)
target_link_libraries(test_gemm_fp16 PRIVATE device_gemm_instance)
add_library(gemm_standalone_xdl_fp16_instances STATIC
    instance/gemm_f16_nn_instance.cpp
    instance/gemm_f16_nt_instance.cpp
    instance/gemm_f16_tn_instance.cpp
    instance/gemm_wavelet_f16_tn_instance.cpp
    instance/gemm_f16_tt_instance.cpp
)
add_test_executable(test_gemm_standalone_xdl_fp16 gemm_standalone_xdl_fp16.cpp)
target_link_libraries(test_gemm_standalone_xdl_fp16 PRIVATE gemm_standalone_xdl_fp16_instances utility)
target_include_directories(test_gemm_standalone_xdl_fp16 PRIVATE instance/)
endif()
if(DTYPES MATCHES "bf16" OR NOT DEFINED DTYPES)
add_test_executable(test_gemm_bf16 gemm_bf16.cpp)
target_link_libraries(test_gemm_bf16 PRIVATE utility)
target_link_libraries(test_gemm_bf16 PRIVATE device_gemm_instance)
endif()
if(DTYPES MATCHES "int8" OR NOT DEFINED DTYPES)
add_test_executable(test_gemm_int8 gemm_int8.cpp)
target_link_libraries(test_gemm_int8 PRIVATE utility)
target_link_libraries(test_gemm_int8 PRIVATE device_gemm_instance)
endif()