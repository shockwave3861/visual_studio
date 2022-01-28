// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Devices_Sensors_Custom_2_H
#define WINRT_Windows_Devices_Sensors_Custom_2_H
#include "winrt/impl/Windows.Devices.Sensors.Custom.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom
{
    struct __declspec(empty_bases) CustomSensor : Windows::Devices::Sensors::Custom::ICustomSensor,
        impl::require<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        CustomSensor(std::nullptr_t) noexcept {}
        CustomSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensor(ptr, take_ownership_from_abi) {}
        CustomSensor(CustomSensor const&) noexcept = default;
        CustomSensor(CustomSensor&&) noexcept = default;
        CustomSensor& operator=(CustomSensor const&) & noexcept = default;
        CustomSensor& operator=(CustomSensor&&) & noexcept = default;
        static auto GetDeviceSelector(winrt::guid const& interfaceId);
        static auto FromIdAsync(param::hstring const& sensorId);
    };
    struct __declspec(empty_bases) CustomSensorReading : Windows::Devices::Sensors::Custom::ICustomSensorReading,
        impl::require<CustomSensorReading, Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        CustomSensorReading(std::nullptr_t) noexcept {}
        CustomSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensorReading(ptr, take_ownership_from_abi) {}
        CustomSensorReading(CustomSensorReading const&) noexcept = default;
        CustomSensorReading(CustomSensorReading&&) noexcept = default;
        CustomSensorReading& operator=(CustomSensorReading const&) & noexcept = default;
        CustomSensorReading& operator=(CustomSensorReading&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CustomSensorReadingChangedEventArgs : Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
    {
        CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        CustomSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
        CustomSensorReadingChangedEventArgs(CustomSensorReadingChangedEventArgs const&) noexcept = default;
        CustomSensorReadingChangedEventArgs(CustomSensorReadingChangedEventArgs&&) noexcept = default;
        CustomSensorReadingChangedEventArgs& operator=(CustomSensorReadingChangedEventArgs const&) & noexcept = default;
        CustomSensorReadingChangedEventArgs& operator=(CustomSensorReadingChangedEventArgs&&) & noexcept = default;
    };
}
#endif
