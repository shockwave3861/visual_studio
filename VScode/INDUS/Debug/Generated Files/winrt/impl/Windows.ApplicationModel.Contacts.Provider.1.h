// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_1_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider
{
    struct __declspec(empty_bases) IContactPickerUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerUI>
    {
        IContactPickerUI(std::nullptr_t = nullptr) noexcept {}
        IContactPickerUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IContactPickerUI(IContactPickerUI const&) noexcept = default;
        IContactPickerUI(IContactPickerUI&&) noexcept = default;
        IContactPickerUI& operator=(IContactPickerUI const&) & noexcept = default;
        IContactPickerUI& operator=(IContactPickerUI&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IContactPickerUI2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerUI2>
    {
        IContactPickerUI2(std::nullptr_t = nullptr) noexcept {}
        IContactPickerUI2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IContactPickerUI2(IContactPickerUI2 const&) noexcept = default;
        IContactPickerUI2(IContactPickerUI2&&) noexcept = default;
        IContactPickerUI2& operator=(IContactPickerUI2 const&) & noexcept = default;
        IContactPickerUI2& operator=(IContactPickerUI2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IContactRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactRemovedEventArgs>
    {
        IContactRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IContactRemovedEventArgs(IContactRemovedEventArgs const&) noexcept = default;
        IContactRemovedEventArgs(IContactRemovedEventArgs&&) noexcept = default;
        IContactRemovedEventArgs& operator=(IContactRemovedEventArgs const&) & noexcept = default;
        IContactRemovedEventArgs& operator=(IContactRemovedEventArgs&&) & noexcept = default;
    };
}
#endif
