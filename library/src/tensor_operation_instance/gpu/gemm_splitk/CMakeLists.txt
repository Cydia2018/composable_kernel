set(GEMM_SPLITK_INSTANCES)

if(DTYPES MATCHES "fp32" OR NOT DEFINED DTYPES)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f32_f32_f32_mk_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f32_f32_f32_mk_nk_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f32_f32_f32_km_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f32_f32_f32_km_nk_mn_instance.cpp)
endif()

if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f16_f16_mk_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f16_f16_mk_nk_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f16_f16_km_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f16_f16_km_nk_mn_instance.cpp)
endif()

if(DTYPES MATCHES "fp16" OR DTYPES MATCHES "fp8" OR NOT DEFINED DTYPES)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f8_f16_f16_mk_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f8_f16_f16_mk_nk_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f8_f16_f16_km_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f8_f16_f16_km_nk_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f8_f16_mk_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f8_f16_mk_nk_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f8_f16_km_kn_mn_instance.cpp)
  list(APPEND GEMM_SPLITK_INSTANCES device_gemm_xdl_splitk_f16_f8_f16_km_nk_mn_instance.cpp)
endif()

add_instance_library(device_gemm_splitk_instance ${GEMM_SPLITK_INSTANCES})
