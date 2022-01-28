// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Web_Http_Filters_1_H
#define WINRT_Windows_Web_Http_Filters_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Web.Http.Filters.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct __declspec(empty_bases) IHttpBaseProtocolFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter>
    {
        IHttpBaseProtocolFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilter(IHttpBaseProtocolFilter const&) noexcept = default;
        IHttpBaseProtocolFilter(IHttpBaseProtocolFilter&&) noexcept = default;
        IHttpBaseProtocolFilter& operator=(IHttpBaseProtocolFilter const&) & noexcept = default;
        IHttpBaseProtocolFilter& operator=(IHttpBaseProtocolFilter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter2>
    {
        IHttpBaseProtocolFilter2(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilter2(IHttpBaseProtocolFilter2 const&) noexcept = default;
        IHttpBaseProtocolFilter2(IHttpBaseProtocolFilter2&&) noexcept = default;
        IHttpBaseProtocolFilter2& operator=(IHttpBaseProtocolFilter2 const&) & noexcept = default;
        IHttpBaseProtocolFilter2& operator=(IHttpBaseProtocolFilter2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter3>
    {
        IHttpBaseProtocolFilter3(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilter3(IHttpBaseProtocolFilter3 const&) noexcept = default;
        IHttpBaseProtocolFilter3(IHttpBaseProtocolFilter3&&) noexcept = default;
        IHttpBaseProtocolFilter3& operator=(IHttpBaseProtocolFilter3 const&) & noexcept = default;
        IHttpBaseProtocolFilter3& operator=(IHttpBaseProtocolFilter3&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter4>
    {
        IHttpBaseProtocolFilter4(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilter4(IHttpBaseProtocolFilter4 const&) noexcept = default;
        IHttpBaseProtocolFilter4(IHttpBaseProtocolFilter4&&) noexcept = default;
        IHttpBaseProtocolFilter4& operator=(IHttpBaseProtocolFilter4 const&) & noexcept = default;
        IHttpBaseProtocolFilter4& operator=(IHttpBaseProtocolFilter4&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter5>
    {
        IHttpBaseProtocolFilter5(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilter5(IHttpBaseProtocolFilter5 const&) noexcept = default;
        IHttpBaseProtocolFilter5(IHttpBaseProtocolFilter5&&) noexcept = default;
        IHttpBaseProtocolFilter5& operator=(IHttpBaseProtocolFilter5 const&) & noexcept = default;
        IHttpBaseProtocolFilter5& operator=(IHttpBaseProtocolFilter5&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilterStatics>
    {
        IHttpBaseProtocolFilterStatics(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpBaseProtocolFilterStatics(IHttpBaseProtocolFilterStatics const&) noexcept = default;
        IHttpBaseProtocolFilterStatics(IHttpBaseProtocolFilterStatics&&) noexcept = default;
        IHttpBaseProtocolFilterStatics& operator=(IHttpBaseProtocolFilterStatics const&) & noexcept = default;
        IHttpBaseProtocolFilterStatics& operator=(IHttpBaseProtocolFilterStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpCacheControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpCacheControl>
    {
        IHttpCacheControl(std::nullptr_t = nullptr) noexcept {}
        IHttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpCacheControl(IHttpCacheControl const&) noexcept = default;
        IHttpCacheControl(IHttpCacheControl&&) noexcept = default;
        IHttpCacheControl& operator=(IHttpCacheControl const&) & noexcept = default;
        IHttpCacheControl& operator=(IHttpCacheControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpFilter>,
        impl::require<Windows::Web::Http::Filters::IHttpFilter, Windows::Foundation::IClosable>
    {
        IHttpFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpFilter(IHttpFilter const&) noexcept = default;
        IHttpFilter(IHttpFilter&&) noexcept = default;
        IHttpFilter& operator=(IHttpFilter const&) & noexcept = default;
        IHttpFilter& operator=(IHttpFilter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHttpServerCustomValidationRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpServerCustomValidationRequestedEventArgs>
    {
        IHttpServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHttpServerCustomValidationRequestedEventArgs(IHttpServerCustomValidationRequestedEventArgs const&) noexcept = default;
        IHttpServerCustomValidationRequestedEventArgs(IHttpServerCustomValidationRequestedEventArgs&&) noexcept = default;
        IHttpServerCustomValidationRequestedEventArgs& operator=(IHttpServerCustomValidationRequestedEventArgs const&) & noexcept = default;
        IHttpServerCustomValidationRequestedEventArgs& operator=(IHttpServerCustomValidationRequestedEventArgs&&) & noexcept = default;
    };
}
#endif
