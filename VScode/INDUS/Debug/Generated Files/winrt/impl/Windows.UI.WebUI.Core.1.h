// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_UI_WebUI_Core_1_H
#define WINRT_Windows_UI_WebUI_Core_1_H
#include "winrt/impl/Windows.UI.WebUI.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core
{
    struct __declspec(empty_bases) IWebUICommandBar :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBar>
    {
        IWebUICommandBar(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBar(IWebUICommandBar const&) noexcept = default;
        IWebUICommandBar(IWebUICommandBar&&) noexcept = default;
        IWebUICommandBar& operator=(IWebUICommandBar const&) & noexcept = default;
        IWebUICommandBar& operator=(IWebUICommandBar&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarBitmapIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarBitmapIcon>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        IWebUICommandBarBitmapIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarBitmapIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarBitmapIcon(IWebUICommandBarBitmapIcon const&) noexcept = default;
        IWebUICommandBarBitmapIcon(IWebUICommandBarBitmapIcon&&) noexcept = default;
        IWebUICommandBarBitmapIcon& operator=(IWebUICommandBarBitmapIcon const&) & noexcept = default;
        IWebUICommandBarBitmapIcon& operator=(IWebUICommandBarBitmapIcon&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarBitmapIconFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarBitmapIconFactory>
    {
        IWebUICommandBarBitmapIconFactory(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarBitmapIconFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarBitmapIconFactory(IWebUICommandBarBitmapIconFactory const&) noexcept = default;
        IWebUICommandBarBitmapIconFactory(IWebUICommandBarBitmapIconFactory&&) noexcept = default;
        IWebUICommandBarBitmapIconFactory& operator=(IWebUICommandBarBitmapIconFactory const&) & noexcept = default;
        IWebUICommandBarBitmapIconFactory& operator=(IWebUICommandBarBitmapIconFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarConfirmationButton :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarConfirmationButton>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        IWebUICommandBarConfirmationButton(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarConfirmationButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarConfirmationButton(IWebUICommandBarConfirmationButton const&) noexcept = default;
        IWebUICommandBarConfirmationButton(IWebUICommandBarConfirmationButton&&) noexcept = default;
        IWebUICommandBarConfirmationButton& operator=(IWebUICommandBarConfirmationButton const&) & noexcept = default;
        IWebUICommandBarConfirmationButton& operator=(IWebUICommandBarConfirmationButton&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarElement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarElement>
    {
        IWebUICommandBarElement(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarElement(IWebUICommandBarElement const&) noexcept = default;
        IWebUICommandBarElement(IWebUICommandBarElement&&) noexcept = default;
        IWebUICommandBarElement& operator=(IWebUICommandBarElement const&) & noexcept = default;
        IWebUICommandBarElement& operator=(IWebUICommandBarElement&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarIcon>
    {
        IWebUICommandBarIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarIcon(IWebUICommandBarIcon const&) noexcept = default;
        IWebUICommandBarIcon(IWebUICommandBarIcon&&) noexcept = default;
        IWebUICommandBarIcon& operator=(IWebUICommandBarIcon const&) & noexcept = default;
        IWebUICommandBarIcon& operator=(IWebUICommandBarIcon&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarIconButton :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarIconButton>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarIconButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        IWebUICommandBarIconButton(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarIconButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarIconButton(IWebUICommandBarIconButton const&) noexcept = default;
        IWebUICommandBarIconButton(IWebUICommandBarIconButton&&) noexcept = default;
        IWebUICommandBarIconButton& operator=(IWebUICommandBarIconButton const&) & noexcept = default;
        IWebUICommandBarIconButton& operator=(IWebUICommandBarIconButton&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarItemInvokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarItemInvokedEventArgs>
    {
        IWebUICommandBarItemInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarItemInvokedEventArgs(IWebUICommandBarItemInvokedEventArgs const&) noexcept = default;
        IWebUICommandBarItemInvokedEventArgs(IWebUICommandBarItemInvokedEventArgs&&) noexcept = default;
        IWebUICommandBarItemInvokedEventArgs& operator=(IWebUICommandBarItemInvokedEventArgs const&) & noexcept = default;
        IWebUICommandBarItemInvokedEventArgs& operator=(IWebUICommandBarItemInvokedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarSizeChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSizeChangedEventArgs>
    {
        IWebUICommandBarSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarSizeChangedEventArgs(IWebUICommandBarSizeChangedEventArgs const&) noexcept = default;
        IWebUICommandBarSizeChangedEventArgs(IWebUICommandBarSizeChangedEventArgs&&) noexcept = default;
        IWebUICommandBarSizeChangedEventArgs& operator=(IWebUICommandBarSizeChangedEventArgs const&) & noexcept = default;
        IWebUICommandBarSizeChangedEventArgs& operator=(IWebUICommandBarSizeChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarStatics>
    {
        IWebUICommandBarStatics(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarStatics(IWebUICommandBarStatics const&) noexcept = default;
        IWebUICommandBarStatics(IWebUICommandBarStatics&&) noexcept = default;
        IWebUICommandBarStatics& operator=(IWebUICommandBarStatics const&) & noexcept = default;
        IWebUICommandBarStatics& operator=(IWebUICommandBarStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarSymbolIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSymbolIcon>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        IWebUICommandBarSymbolIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSymbolIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarSymbolIcon(IWebUICommandBarSymbolIcon const&) noexcept = default;
        IWebUICommandBarSymbolIcon(IWebUICommandBarSymbolIcon&&) noexcept = default;
        IWebUICommandBarSymbolIcon& operator=(IWebUICommandBarSymbolIcon const&) & noexcept = default;
        IWebUICommandBarSymbolIcon& operator=(IWebUICommandBarSymbolIcon&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWebUICommandBarSymbolIconFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSymbolIconFactory>
    {
        IWebUICommandBarSymbolIconFactory(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSymbolIconFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWebUICommandBarSymbolIconFactory(IWebUICommandBarSymbolIconFactory const&) noexcept = default;
        IWebUICommandBarSymbolIconFactory(IWebUICommandBarSymbolIconFactory&&) noexcept = default;
        IWebUICommandBarSymbolIconFactory& operator=(IWebUICommandBarSymbolIconFactory const&) & noexcept = default;
        IWebUICommandBarSymbolIconFactory& operator=(IWebUICommandBarSymbolIconFactory&&) & noexcept = default;
    };
}
#endif
