// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_ApplicationModel_AppExtensions_1_H
#define WINRT_Windows_ApplicationModel_AppExtensions_1_H
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct __declspec(empty_bases) IAppExtension :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtension>
    {
        IAppExtension(std::nullptr_t = nullptr) noexcept {}
        IAppExtension(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtension(IAppExtension const&) noexcept = default;
        IAppExtension(IAppExtension&&) noexcept = default;
        IAppExtension& operator=(IAppExtension const&) & noexcept = default;
        IAppExtension& operator=(IAppExtension&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionCatalog :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionCatalog>
    {
        IAppExtensionCatalog(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionCatalog(IAppExtensionCatalog const&) noexcept = default;
        IAppExtensionCatalog(IAppExtensionCatalog&&) noexcept = default;
        IAppExtensionCatalog& operator=(IAppExtensionCatalog const&) & noexcept = default;
        IAppExtensionCatalog& operator=(IAppExtensionCatalog&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionCatalogStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionCatalogStatics>
    {
        IAppExtensionCatalogStatics(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionCatalogStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionCatalogStatics(IAppExtensionCatalogStatics const&) noexcept = default;
        IAppExtensionCatalogStatics(IAppExtensionCatalogStatics&&) noexcept = default;
        IAppExtensionCatalogStatics& operator=(IAppExtensionCatalogStatics const&) & noexcept = default;
        IAppExtensionCatalogStatics& operator=(IAppExtensionCatalogStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionPackageInstalledEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageInstalledEventArgs>
    {
        IAppExtensionPackageInstalledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionPackageInstalledEventArgs(IAppExtensionPackageInstalledEventArgs const&) noexcept = default;
        IAppExtensionPackageInstalledEventArgs(IAppExtensionPackageInstalledEventArgs&&) noexcept = default;
        IAppExtensionPackageInstalledEventArgs& operator=(IAppExtensionPackageInstalledEventArgs const&) & noexcept = default;
        IAppExtensionPackageInstalledEventArgs& operator=(IAppExtensionPackageInstalledEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionPackageStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageStatusChangedEventArgs>
    {
        IAppExtensionPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionPackageStatusChangedEventArgs(IAppExtensionPackageStatusChangedEventArgs const&) noexcept = default;
        IAppExtensionPackageStatusChangedEventArgs(IAppExtensionPackageStatusChangedEventArgs&&) noexcept = default;
        IAppExtensionPackageStatusChangedEventArgs& operator=(IAppExtensionPackageStatusChangedEventArgs const&) & noexcept = default;
        IAppExtensionPackageStatusChangedEventArgs& operator=(IAppExtensionPackageStatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionPackageUninstallingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUninstallingEventArgs>
    {
        IAppExtensionPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionPackageUninstallingEventArgs(IAppExtensionPackageUninstallingEventArgs const&) noexcept = default;
        IAppExtensionPackageUninstallingEventArgs(IAppExtensionPackageUninstallingEventArgs&&) noexcept = default;
        IAppExtensionPackageUninstallingEventArgs& operator=(IAppExtensionPackageUninstallingEventArgs const&) & noexcept = default;
        IAppExtensionPackageUninstallingEventArgs& operator=(IAppExtensionPackageUninstallingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionPackageUpdatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUpdatedEventArgs>
    {
        IAppExtensionPackageUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionPackageUpdatedEventArgs(IAppExtensionPackageUpdatedEventArgs const&) noexcept = default;
        IAppExtensionPackageUpdatedEventArgs(IAppExtensionPackageUpdatedEventArgs&&) noexcept = default;
        IAppExtensionPackageUpdatedEventArgs& operator=(IAppExtensionPackageUpdatedEventArgs const&) & noexcept = default;
        IAppExtensionPackageUpdatedEventArgs& operator=(IAppExtensionPackageUpdatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppExtensionPackageUpdatingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUpdatingEventArgs>
    {
        IAppExtensionPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppExtensionPackageUpdatingEventArgs(IAppExtensionPackageUpdatingEventArgs const&) noexcept = default;
        IAppExtensionPackageUpdatingEventArgs(IAppExtensionPackageUpdatingEventArgs&&) noexcept = default;
        IAppExtensionPackageUpdatingEventArgs& operator=(IAppExtensionPackageUpdatingEventArgs const&) & noexcept = default;
        IAppExtensionPackageUpdatingEventArgs& operator=(IAppExtensionPackageUpdatingEventArgs&&) & noexcept = default;
    };
}
#endif
