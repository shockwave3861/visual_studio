// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Services_Cortana_2_H
#define WINRT_Windows_Services_Cortana_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Services.Cortana.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Cortana
{
    struct __declspec(empty_bases) CortanaActionableInsights : Windows::Services::Cortana::ICortanaActionableInsights
    {
        CortanaActionableInsights(std::nullptr_t) noexcept {}
        CortanaActionableInsights(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Cortana::ICortanaActionableInsights(ptr, take_ownership_from_abi) {}
        CortanaActionableInsights(CortanaActionableInsights const&) noexcept = default;
        CortanaActionableInsights(CortanaActionableInsights&&) noexcept = default;
        CortanaActionableInsights& operator=(CortanaActionableInsights const&) & noexcept = default;
        CortanaActionableInsights& operator=(CortanaActionableInsights&&) & noexcept = default;
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) CortanaActionableInsightsOptions : Windows::Services::Cortana::ICortanaActionableInsightsOptions
    {
        CortanaActionableInsightsOptions(std::nullptr_t) noexcept {}
        CortanaActionableInsightsOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Cortana::ICortanaActionableInsightsOptions(ptr, take_ownership_from_abi) {}
        CortanaActionableInsightsOptions();
        CortanaActionableInsightsOptions(CortanaActionableInsightsOptions const&) noexcept = default;
        CortanaActionableInsightsOptions(CortanaActionableInsightsOptions&&) noexcept = default;
        CortanaActionableInsightsOptions& operator=(CortanaActionableInsightsOptions const&) & noexcept = default;
        CortanaActionableInsightsOptions& operator=(CortanaActionableInsightsOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CortanaPermissionsManager : Windows::Services::Cortana::ICortanaPermissionsManager
    {
        CortanaPermissionsManager(std::nullptr_t) noexcept {}
        CortanaPermissionsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Cortana::ICortanaPermissionsManager(ptr, take_ownership_from_abi) {}
        CortanaPermissionsManager(CortanaPermissionsManager const&) noexcept = default;
        CortanaPermissionsManager(CortanaPermissionsManager&&) noexcept = default;
        CortanaPermissionsManager& operator=(CortanaPermissionsManager const&) & noexcept = default;
        CortanaPermissionsManager& operator=(CortanaPermissionsManager&&) & noexcept = default;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) CortanaSettings : Windows::Services::Cortana::ICortanaSettings
    {
        CortanaSettings(std::nullptr_t) noexcept {}
        CortanaSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Cortana::ICortanaSettings(ptr, take_ownership_from_abi) {}
        CortanaSettings(CortanaSettings const&) noexcept = default;
        CortanaSettings(CortanaSettings&&) noexcept = default;
        CortanaSettings& operator=(CortanaSettings const&) & noexcept = default;
        CortanaSettings& operator=(CortanaSettings&&) & noexcept = default;
        static auto IsSupported();
        static auto GetDefault();
    };
}
#endif
