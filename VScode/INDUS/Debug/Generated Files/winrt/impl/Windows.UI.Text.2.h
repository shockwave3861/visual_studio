// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_UI_Text_2_H
#define WINRT_Windows_UI_Text_2_H
#include "winrt/impl/Windows.UI.Text.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Text
{
    struct FontWeight
    {
        uint16_t Weight;
    };
    inline bool operator==(FontWeight const& left, FontWeight const& right) noexcept
    {
        return left.Weight == right.Weight;
    }
    inline bool operator!=(FontWeight const& left, FontWeight const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ContentLinkInfo : Windows::UI::Text::IContentLinkInfo
    {
        ContentLinkInfo(std::nullptr_t) noexcept {}
        ContentLinkInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::IContentLinkInfo(ptr, take_ownership_from_abi) {}
        ContentLinkInfo();
        ContentLinkInfo(ContentLinkInfo const&) noexcept = default;
        ContentLinkInfo(ContentLinkInfo&&) noexcept = default;
        ContentLinkInfo& operator=(ContentLinkInfo const&) & noexcept = default;
        ContentLinkInfo& operator=(ContentLinkInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FontWeights : Windows::UI::Text::IFontWeights
    {
        FontWeights(std::nullptr_t) noexcept {}
        FontWeights(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::IFontWeights(ptr, take_ownership_from_abi) {}
        FontWeights(FontWeights const&) noexcept = default;
        FontWeights(FontWeights&&) noexcept = default;
        FontWeights& operator=(FontWeights const&) & noexcept = default;
        FontWeights& operator=(FontWeights&&) & noexcept = default;
        [[nodiscard]] static auto Black();
        [[nodiscard]] static auto Bold();
        [[nodiscard]] static auto ExtraBlack();
        [[nodiscard]] static auto ExtraBold();
        [[nodiscard]] static auto ExtraLight();
        [[nodiscard]] static auto Light();
        [[nodiscard]] static auto Medium();
        [[nodiscard]] static auto Normal();
        [[nodiscard]] static auto SemiBold();
        [[nodiscard]] static auto SemiLight();
        [[nodiscard]] static auto Thin();
    };
    struct __declspec(empty_bases) RichEditTextDocument : Windows::UI::Text::ITextDocument,
        impl::require<RichEditTextDocument, Windows::UI::Text::ITextDocument2, Windows::UI::Text::ITextDocument3>
    {
        RichEditTextDocument(std::nullptr_t) noexcept {}
        RichEditTextDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::ITextDocument(ptr, take_ownership_from_abi) {}
        RichEditTextDocument(RichEditTextDocument const&) noexcept = default;
        RichEditTextDocument(RichEditTextDocument&&) noexcept = default;
        RichEditTextDocument& operator=(RichEditTextDocument const&) & noexcept = default;
        RichEditTextDocument& operator=(RichEditTextDocument&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RichEditTextRange : Windows::UI::Text::ITextRange,
        impl::require<RichEditTextRange, Windows::UI::Text::IRichEditTextRange>
    {
        RichEditTextRange(std::nullptr_t) noexcept {}
        RichEditTextRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::ITextRange(ptr, take_ownership_from_abi) {}
        RichEditTextRange(RichEditTextRange const&) noexcept = default;
        RichEditTextRange(RichEditTextRange&&) noexcept = default;
        RichEditTextRange& operator=(RichEditTextRange const&) & noexcept = default;
        RichEditTextRange& operator=(RichEditTextRange&&) & noexcept = default;
    };
    struct TextConstants
    {
        TextConstants() = delete;
        [[nodiscard]] static auto AutoColor();
        [[nodiscard]] static auto MinUnitCount();
        [[nodiscard]] static auto MaxUnitCount();
        [[nodiscard]] static auto UndefinedColor();
        [[nodiscard]] static auto UndefinedFloatValue();
        [[nodiscard]] static auto UndefinedInt32Value();
        [[nodiscard]] static auto UndefinedFontStretch();
        [[nodiscard]] static auto UndefinedFontStyle();
    };
}
#endif
