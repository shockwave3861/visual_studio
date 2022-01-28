// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_System_Display_2_H
#define WINRT_Windows_System_Display_2_H
#include "winrt/impl/Windows.System.Display.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Display
{
    struct __declspec(empty_bases) DisplayRequest : Windows::System::Display::IDisplayRequest
    {
        DisplayRequest(std::nullptr_t) noexcept {}
        DisplayRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Display::IDisplayRequest(ptr, take_ownership_from_abi) {}
        DisplayRequest();
        DisplayRequest(DisplayRequest const&) noexcept = default;
        DisplayRequest(DisplayRequest&&) noexcept = default;
        DisplayRequest& operator=(DisplayRequest const&) & noexcept = default;
        DisplayRequest& operator=(DisplayRequest&&) & noexcept = default;
    };
}
#endif
