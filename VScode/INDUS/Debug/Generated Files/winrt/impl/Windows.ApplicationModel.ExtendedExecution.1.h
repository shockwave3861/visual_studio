// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    struct __declspec(empty_bases) IExtendedExecutionRevokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionRevokedEventArgs>
    {
        IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IExtendedExecutionRevokedEventArgs(IExtendedExecutionRevokedEventArgs const&) noexcept = default;
        IExtendedExecutionRevokedEventArgs(IExtendedExecutionRevokedEventArgs&&) noexcept = default;
        IExtendedExecutionRevokedEventArgs& operator=(IExtendedExecutionRevokedEventArgs const&) & noexcept = default;
        IExtendedExecutionRevokedEventArgs& operator=(IExtendedExecutionRevokedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IExtendedExecutionSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionSession>,
        impl::require<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession, Windows::Foundation::IClosable>
    {
        IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IExtendedExecutionSession(IExtendedExecutionSession const&) noexcept = default;
        IExtendedExecutionSession(IExtendedExecutionSession&&) noexcept = default;
        IExtendedExecutionSession& operator=(IExtendedExecutionSession const&) & noexcept = default;
        IExtendedExecutionSession& operator=(IExtendedExecutionSession&&) & noexcept = default;
    };
}
#endif
