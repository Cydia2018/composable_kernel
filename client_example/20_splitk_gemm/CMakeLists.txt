add_executable(client_splitK_gemm splitK_gemm_fp16_f8.cpp)
target_link_libraries(client_splitK_gemm PRIVATE composable_kernel::device_operations)
