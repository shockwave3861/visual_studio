// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Storage_Provider_2_H
#define WINRT_Windows_Storage_Provider_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    struct CachedFileUpdater
    {
        CachedFileUpdater() = delete;
        static auto SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options);
    };
    struct __declspec(empty_bases) CachedFileUpdaterUI : Windows::Storage::Provider::ICachedFileUpdaterUI,
        impl::require<CachedFileUpdaterUI, Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        CachedFileUpdaterUI(std::nullptr_t) noexcept {}
        CachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::ICachedFileUpdaterUI(ptr, take_ownership_from_abi) {}
        CachedFileUpdaterUI(CachedFileUpdaterUI const&) noexcept = default;
        CachedFileUpdaterUI(CachedFileUpdaterUI&&) noexcept = default;
        CachedFileUpdaterUI& operator=(CachedFileUpdaterUI const&) & noexcept = default;
        CachedFileUpdaterUI& operator=(CachedFileUpdaterUI&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileUpdateRequest : Windows::Storage::Provider::IFileUpdateRequest,
        impl::require<FileUpdateRequest, Windows::Storage::Provider::IFileUpdateRequest2>
    {
        FileUpdateRequest(std::nullptr_t) noexcept {}
        FileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequest(ptr, take_ownership_from_abi) {}
        FileUpdateRequest(FileUpdateRequest const&) noexcept = default;
        FileUpdateRequest(FileUpdateRequest&&) noexcept = default;
        FileUpdateRequest& operator=(FileUpdateRequest const&) & noexcept = default;
        FileUpdateRequest& operator=(FileUpdateRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileUpdateRequestDeferral : Windows::Storage::Provider::IFileUpdateRequestDeferral
    {
        FileUpdateRequestDeferral(std::nullptr_t) noexcept {}
        FileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequestDeferral(ptr, take_ownership_from_abi) {}
        FileUpdateRequestDeferral(FileUpdateRequestDeferral const&) noexcept = default;
        FileUpdateRequestDeferral(FileUpdateRequestDeferral&&) noexcept = default;
        FileUpdateRequestDeferral& operator=(FileUpdateRequestDeferral const&) & noexcept = default;
        FileUpdateRequestDeferral& operator=(FileUpdateRequestDeferral&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileUpdateRequestedEventArgs : Windows::Storage::Provider::IFileUpdateRequestedEventArgs
    {
        FileUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
        FileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequestedEventArgs(ptr, take_ownership_from_abi) {}
        FileUpdateRequestedEventArgs(FileUpdateRequestedEventArgs const&) noexcept = default;
        FileUpdateRequestedEventArgs(FileUpdateRequestedEventArgs&&) noexcept = default;
        FileUpdateRequestedEventArgs& operator=(FileUpdateRequestedEventArgs const&) & noexcept = default;
        FileUpdateRequestedEventArgs& operator=(FileUpdateRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorageProviderGetContentInfoForPathResult : Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult
    {
        StorageProviderGetContentInfoForPathResult(std::nullptr_t) noexcept {}
        StorageProviderGetContentInfoForPathResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetContentInfoForPathResult();
        StorageProviderGetContentInfoForPathResult(StorageProviderGetContentInfoForPathResult const&) noexcept = default;
        StorageProviderGetContentInfoForPathResult(StorageProviderGetContentInfoForPathResult&&) noexcept = default;
        StorageProviderGetContentInfoForPathResult& operator=(StorageProviderGetContentInfoForPathResult const&) & noexcept = default;
        StorageProviderGetContentInfoForPathResult& operator=(StorageProviderGetContentInfoForPathResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorageProviderGetPathForContentUriResult : Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult
    {
        StorageProviderGetPathForContentUriResult(std::nullptr_t) noexcept {}
        StorageProviderGetPathForContentUriResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetPathForContentUriResult();
        StorageProviderGetPathForContentUriResult(StorageProviderGetPathForContentUriResult const&) noexcept = default;
        StorageProviderGetPathForContentUriResult(StorageProviderGetPathForContentUriResult&&) noexcept = default;
        StorageProviderGetPathForContentUriResult& operator=(StorageProviderGetPathForContentUriResult const&) & noexcept = default;
        StorageProviderGetPathForContentUriResult& operator=(StorageProviderGetPathForContentUriResult&&) & noexcept = default;
    };
    struct StorageProviderItemProperties
    {
        StorageProviderItemProperties() = delete;
        static auto SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties);
    };
    struct __declspec(empty_bases) StorageProviderItemProperty : Windows::Storage::Provider::IStorageProviderItemProperty
    {
        StorageProviderItemProperty(std::nullptr_t) noexcept {}
        StorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderItemProperty(ptr, take_ownership_from_abi) {}
        StorageProviderItemProperty();
        StorageProviderItemProperty(StorageProviderItemProperty const&) noexcept = default;
        StorageProviderItemProperty(StorageProviderItemProperty&&) noexcept = default;
        StorageProviderItemProperty& operator=(StorageProviderItemProperty const&) & noexcept = default;
        StorageProviderItemProperty& operator=(StorageProviderItemProperty&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorageProviderItemPropertyDefinition : Windows::Storage::Provider::IStorageProviderItemPropertyDefinition
    {
        StorageProviderItemPropertyDefinition(std::nullptr_t) noexcept {}
        StorageProviderItemPropertyDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderItemPropertyDefinition(ptr, take_ownership_from_abi) {}
        StorageProviderItemPropertyDefinition();
        StorageProviderItemPropertyDefinition(StorageProviderItemPropertyDefinition const&) noexcept = default;
        StorageProviderItemPropertyDefinition(StorageProviderItemPropertyDefinition&&) noexcept = default;
        StorageProviderItemPropertyDefinition& operator=(StorageProviderItemPropertyDefinition const&) & noexcept = default;
        StorageProviderItemPropertyDefinition& operator=(StorageProviderItemPropertyDefinition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorageProviderSyncRootInfo : Windows::Storage::Provider::IStorageProviderSyncRootInfo,
        impl::require<StorageProviderSyncRootInfo, Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        StorageProviderSyncRootInfo(std::nullptr_t) noexcept {}
        StorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderSyncRootInfo(ptr, take_ownership_from_abi) {}
        StorageProviderSyncRootInfo();
        StorageProviderSyncRootInfo(StorageProviderSyncRootInfo const&) noexcept = default;
        StorageProviderSyncRootInfo(StorageProviderSyncRootInfo&&) noexcept = default;
        StorageProviderSyncRootInfo& operator=(StorageProviderSyncRootInfo const&) & noexcept = default;
        StorageProviderSyncRootInfo& operator=(StorageProviderSyncRootInfo&&) & noexcept = default;
    };
    struct StorageProviderSyncRootManager
    {
        StorageProviderSyncRootManager() = delete;
        static auto Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation);
        static auto Unregister(param::hstring const& id);
        static auto GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder);
        static auto GetSyncRootInformationForId(param::hstring const& id);
        static auto GetCurrentSyncRoots();
    };
}
#endif
