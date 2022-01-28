// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Web_Http_Filters_2_H
#define WINRT_Windows_Web_Http_Filters_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.Filters.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct __declspec(empty_bases) HttpBaseProtocolFilter : Windows::Web::Http::Filters::IHttpBaseProtocolFilter,
        impl::require<HttpBaseProtocolFilter, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4, Windows::Web::Http::Filters::IHttpBaseProtocolFilter5, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
    {
        HttpBaseProtocolFilter(std::nullptr_t) noexcept {}
        HttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpBaseProtocolFilter(ptr, take_ownership_from_abi) {}
        HttpBaseProtocolFilter();
        HttpBaseProtocolFilter(HttpBaseProtocolFilter const&) noexcept = default;
        HttpBaseProtocolFilter(HttpBaseProtocolFilter&&) noexcept = default;
        HttpBaseProtocolFilter& operator=(HttpBaseProtocolFilter const&) & noexcept = default;
        HttpBaseProtocolFilter& operator=(HttpBaseProtocolFilter&&) & noexcept = default;
        static auto CreateForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) HttpCacheControl : Windows::Web::Http::Filters::IHttpCacheControl
    {
        HttpCacheControl(std::nullptr_t) noexcept {}
        HttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpCacheControl(ptr, take_ownership_from_abi) {}
        HttpCacheControl(HttpCacheControl const&) noexcept = default;
        HttpCacheControl(HttpCacheControl&&) noexcept = default;
        HttpCacheControl& operator=(HttpCacheControl const&) & noexcept = default;
        HttpCacheControl& operator=(HttpCacheControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HttpServerCustomValidationRequestedEventArgs : Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs
    {
        HttpServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        HttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
        HttpServerCustomValidationRequestedEventArgs(HttpServerCustomValidationRequestedEventArgs const&) noexcept = default;
        HttpServerCustomValidationRequestedEventArgs(HttpServerCustomValidationRequestedEventArgs&&) noexcept = default;
        HttpServerCustomValidationRequestedEventArgs& operator=(HttpServerCustomValidationRequestedEventArgs const&) & noexcept = default;
        HttpServerCustomValidationRequestedEventArgs& operator=(HttpServerCustomValidationRequestedEventArgs&&) & noexcept = default;
    };
}
#endif