// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Data_Html_1_H
#define WINRT_Windows_Data_Html_1_H
#include "winrt/impl/Windows.Data.Html.0.h"
WINRT_EXPORT namespace winrt::Windows::Data::Html
{
    struct __declspec(empty_bases) IHtmlUtilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHtmlUtilities>
    {
        IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
        IHtmlUtilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHtmlUtilities(IHtmlUtilities const&) noexcept = default;
        IHtmlUtilities(IHtmlUtilities&&) noexcept = default;
        IHtmlUtilities& operator=(IHtmlUtilities const&) & noexcept = default;
        IHtmlUtilities& operator=(IHtmlUtilities&&) & noexcept = default;
    };
}
#endif
