// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2023, Advanced Micro Devices, Inc. All rights reserved.

#include <vector>

#include "ck/library/tensor_operation_instance/add_device_operation_instance.hpp"
#include "ck/library/tensor_operation_instance/device_operation_instance_factory.hpp"
#include "ck/library/tensor_operation_instance/gpu/softmax/device_softmax_f16_f16_instance_rank3_reduce3.hpp"
#include "ck/library/tensor_operation_instance/gpu/softmax/device_softmax_f16_f16_instance_type.hpp"

namespace ck {
namespace tensor_operation {
namespace device {
namespace instance {

void add_device_softmax_f16_f16_rank3_reduce3_instances(
    std::vector<DeviceSoftmaxPtr<F16, F32, F16, PassThrough, PassThrough, 3, 3>>& instances)
{
    add_device_operation_instances(instances, device_softmax_f16_f16_generic_instance<3, 3>{});
    add_device_operation_instances(instances, device_softmax_f16_f16_instances<3, 3>{});
}

} // namespace instance
} // namespace device
} // namespace tensor_operation
} // namespace ck
