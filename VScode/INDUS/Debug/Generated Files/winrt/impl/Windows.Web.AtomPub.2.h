// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Web_AtomPub_2_H
#define WINRT_Windows_Web_AtomPub_2_H
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Web.Syndication.1.h"
#include "winrt/impl/Windows.Web.AtomPub.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::AtomPub
{
    struct __declspec(empty_bases) AtomPubClient : Windows::Web::AtomPub::IAtomPubClient
    {
        AtomPubClient(std::nullptr_t) noexcept {}
        AtomPubClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IAtomPubClient(ptr, take_ownership_from_abi) {}
        AtomPubClient();
        explicit AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
        AtomPubClient(AtomPubClient const&) noexcept = default;
        AtomPubClient(AtomPubClient&&) noexcept = default;
        AtomPubClient& operator=(AtomPubClient const&) & noexcept = default;
        AtomPubClient& operator=(AtomPubClient&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ResourceCollection : Windows::Web::AtomPub::IResourceCollection
    {
        ResourceCollection(std::nullptr_t) noexcept {}
        ResourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IResourceCollection(ptr, take_ownership_from_abi) {}
        ResourceCollection(ResourceCollection const&) noexcept = default;
        ResourceCollection(ResourceCollection&&) noexcept = default;
        ResourceCollection& operator=(ResourceCollection const&) & noexcept = default;
        ResourceCollection& operator=(ResourceCollection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServiceDocument : Windows::Web::AtomPub::IServiceDocument
    {
        ServiceDocument(std::nullptr_t) noexcept {}
        ServiceDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IServiceDocument(ptr, take_ownership_from_abi) {}
        ServiceDocument(ServiceDocument const&) noexcept = default;
        ServiceDocument(ServiceDocument&&) noexcept = default;
        ServiceDocument& operator=(ServiceDocument const&) & noexcept = default;
        ServiceDocument& operator=(ServiceDocument&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Workspace : Windows::Web::AtomPub::IWorkspace
    {
        Workspace(std::nullptr_t) noexcept {}
        Workspace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IWorkspace(ptr, take_ownership_from_abi) {}
        Workspace(Workspace const&) noexcept = default;
        Workspace(Workspace&&) noexcept = default;
        Workspace& operator=(Workspace const&) & noexcept = default;
        Workspace& operator=(Workspace&&) & noexcept = default;
    };
}
#endif
