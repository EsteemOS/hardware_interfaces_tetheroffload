/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef android_hardware_automotive_vehicle_V2_1_impl_DefaultConfig_H_
#define android_hardware_automotive_vehicle_V2_1_impl_DefaultConfig_H_

#include <android/hardware/automotive/vehicle/2.1/types.h>
#include <vhal_v2_0/VehicleUtils.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_1 {

namespace impl {

const V2_0::VehiclePropConfig kVehicleProperties[] = {
    {
        .prop = V2_0::toInt(V2_1::VehicleProperty::WHEEL_TICK),
        .access = V2_0::VehiclePropertyAccess::READ,
        .changeMode = V2_0::VehiclePropertyChangeMode::CONTINUOUS,
    },

    {
        .prop = V2_0::toInt(V2_1::VehicleProperty::OBD2_LIVE_FRAME),
        .access = V2_0::VehiclePropertyAccess::READ,
        .changeMode = V2_0::VehiclePropertyChangeMode::ON_CHANGE,
        .configArray = {0,0}
    },

    {
        .prop = V2_0::toInt(V2_1::VehicleProperty::OBD2_FREEZE_FRAME),
        .access = V2_0::VehiclePropertyAccess::READ,
        .changeMode = V2_0::VehiclePropertyChangeMode::ON_CHANGE,
        .configArray = {0,0}
    },

    {
        .prop = V2_0::toInt(V2_1::VehicleProperty::OBD2_FREEZE_FRAME_INFO),
        .access = V2_0::VehiclePropertyAccess::READ,
        .changeMode = V2_0::VehiclePropertyChangeMode::ON_CHANGE
    },

    {
        .prop = V2_0::toInt(V2_1::VehicleProperty::OBD2_FREEZE_FRAME_CLEAR),
        .access = V2_0::VehiclePropertyAccess::WRITE,
        .changeMode = V2_0::VehiclePropertyChangeMode::ON_CHANGE
    }
};

}  // impl

}  // namespace V2_1
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif // android_hardware_automotive_vehicle_V2_1_impl_DefaultConfig_H_
