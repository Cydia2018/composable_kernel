set(DEVICE_MAXPOOL_BWD_INSTANCES)
if(DTYPES MATCHES "fp16" OR NOT DEFINED DTYPES)
    list(APPEND DEVICE_MAXPOOL_BWD_INSTANCES device_max_pool_bwd_f16_instance.cpp)
endif()
if(DTYPES MATCHES "bf16" OR NOT DEFINED DTYPES)
    list(APPEND DEVICE_MAXPOOL_BWD_INSTANCES device_max_pool_bwd_bf16_instance.cpp)
endif()
if(DTYPES MATCHES "fp32" OR NOT DEFINED DTYPES)
    list(APPEND DEVICE_MAXPOOL_BWD_INSTANCES device_max_pool_bwd_f32_instance.cpp)
endif()
add_instance_library(device_max_pool_bwd_instance ${DEVICE_MAXPOOL_BWD_INSTANCES})
