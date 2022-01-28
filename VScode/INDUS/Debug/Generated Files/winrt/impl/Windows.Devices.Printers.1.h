// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Devices_Printers_1_H
#define WINRT_Windows_Devices_Printers_1_H
#include "winrt/impl/Windows.Devices.Printers.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct __declspec(empty_bases) IPrint3DDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DDevice>
    {
        IPrint3DDevice(std::nullptr_t = nullptr) noexcept {}
        IPrint3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPrint3DDevice(IPrint3DDevice const&) noexcept = default;
        IPrint3DDevice(IPrint3DDevice&&) noexcept = default;
        IPrint3DDevice& operator=(IPrint3DDevice const&) & noexcept = default;
        IPrint3DDevice& operator=(IPrint3DDevice&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPrint3DDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DDeviceStatics>
    {
        IPrint3DDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IPrint3DDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPrint3DDeviceStatics(IPrint3DDeviceStatics const&) noexcept = default;
        IPrint3DDeviceStatics(IPrint3DDeviceStatics&&) noexcept = default;
        IPrint3DDeviceStatics& operator=(IPrint3DDeviceStatics const&) & noexcept = default;
        IPrint3DDeviceStatics& operator=(IPrint3DDeviceStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPrintSchema :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSchema>
    {
        IPrintSchema(std::nullptr_t = nullptr) noexcept {}
        IPrintSchema(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPrintSchema(IPrintSchema const&) noexcept = default;
        IPrintSchema(IPrintSchema&&) noexcept = default;
        IPrintSchema& operator=(IPrintSchema const&) & noexcept = default;
        IPrintSchema& operator=(IPrintSchema&&) & noexcept = default;
    };
}
#endif
