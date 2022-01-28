// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Management_Update_2_H
#define WINRT_Windows_Management_Update_2_H
#include "winrt/impl/Windows.Management.Update.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Update
{
    struct __declspec(empty_bases) PreviewBuildsManager : Windows::Management::Update::IPreviewBuildsManager
    {
        PreviewBuildsManager(std::nullptr_t) noexcept {}
        PreviewBuildsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Update::IPreviewBuildsManager(ptr, take_ownership_from_abi) {}
        PreviewBuildsManager(PreviewBuildsManager const&) noexcept = default;
        PreviewBuildsManager(PreviewBuildsManager&&) noexcept = default;
        PreviewBuildsManager& operator=(PreviewBuildsManager const&) & noexcept = default;
        PreviewBuildsManager& operator=(PreviewBuildsManager&&) & noexcept = default;
        static auto GetDefault();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) PreviewBuildsState : Windows::Management::Update::IPreviewBuildsState
    {
        PreviewBuildsState(std::nullptr_t) noexcept {}
        PreviewBuildsState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Update::IPreviewBuildsState(ptr, take_ownership_from_abi) {}
        PreviewBuildsState(PreviewBuildsState const&) noexcept = default;
        PreviewBuildsState(PreviewBuildsState&&) noexcept = default;
        PreviewBuildsState& operator=(PreviewBuildsState const&) & noexcept = default;
        PreviewBuildsState& operator=(PreviewBuildsState&&) & noexcept = default;
    };
}
#endif
