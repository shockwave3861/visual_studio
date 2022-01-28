// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_ApplicationModel_Resources_2_H
#define WINRT_Windows_ApplicationModel_Resources_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources
{
    struct __declspec(empty_bases) ResourceLoader : Windows::ApplicationModel::Resources::IResourceLoader,
        impl::require<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        ResourceLoader(std::nullptr_t) noexcept {}
        ResourceLoader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Resources::IResourceLoader(ptr, take_ownership_from_abi) {}
        ResourceLoader();
        explicit ResourceLoader(param::hstring const& name);
        ResourceLoader(ResourceLoader const&) noexcept = default;
        ResourceLoader(ResourceLoader&&) noexcept = default;
        ResourceLoader& operator=(ResourceLoader const&) & noexcept = default;
        ResourceLoader& operator=(ResourceLoader&&) & noexcept = default;
        static auto GetStringForReference(Windows::Foundation::Uri const& uri);
        static auto GetForCurrentView();
        static auto GetForCurrentView(param::hstring const& name);
        static auto GetForViewIndependentUse();
        static auto GetForViewIndependentUse(param::hstring const& name);
        static auto GetForUIContext(Windows::UI::UIContext const& context);
    };
}
#endif
