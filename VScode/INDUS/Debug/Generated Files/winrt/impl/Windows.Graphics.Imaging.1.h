// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Graphics_Imaging_1_H
#define WINRT_Windows_Graphics_Imaging_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct __declspec(empty_bases) IBitmapBuffer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapBuffer>,
        impl::require<Windows::Graphics::Imaging::IBitmapBuffer, Windows::Foundation::IClosable, Windows::Foundation::IMemoryBuffer>
    {
        IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
        IBitmapBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapBuffer(IBitmapBuffer const&) noexcept = default;
        IBitmapBuffer(IBitmapBuffer&&) noexcept = default;
        IBitmapBuffer& operator=(IBitmapBuffer const&) & noexcept = default;
        IBitmapBuffer& operator=(IBitmapBuffer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapCodecInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapCodecInformation>
    {
        IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
        IBitmapCodecInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapCodecInformation(IBitmapCodecInformation const&) noexcept = default;
        IBitmapCodecInformation(IBitmapCodecInformation&&) noexcept = default;
        IBitmapCodecInformation& operator=(IBitmapCodecInformation const&) & noexcept = default;
        IBitmapCodecInformation& operator=(IBitmapCodecInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapDecoder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoder>
    {
        IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapDecoder(IBitmapDecoder const&) noexcept = default;
        IBitmapDecoder(IBitmapDecoder&&) noexcept = default;
        IBitmapDecoder& operator=(IBitmapDecoder const&) & noexcept = default;
        IBitmapDecoder& operator=(IBitmapDecoder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapDecoderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics>
    {
        IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapDecoderStatics(IBitmapDecoderStatics const&) noexcept = default;
        IBitmapDecoderStatics(IBitmapDecoderStatics&&) noexcept = default;
        IBitmapDecoderStatics& operator=(IBitmapDecoderStatics const&) & noexcept = default;
        IBitmapDecoderStatics& operator=(IBitmapDecoderStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapDecoderStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics2>
    {
        IBitmapDecoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapDecoderStatics2(IBitmapDecoderStatics2 const&) noexcept = default;
        IBitmapDecoderStatics2(IBitmapDecoderStatics2&&) noexcept = default;
        IBitmapDecoderStatics2& operator=(IBitmapDecoderStatics2 const&) & noexcept = default;
        IBitmapDecoderStatics2& operator=(IBitmapDecoderStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapEncoder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoder>
    {
        IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapEncoder(IBitmapEncoder const&) noexcept = default;
        IBitmapEncoder(IBitmapEncoder&&) noexcept = default;
        IBitmapEncoder& operator=(IBitmapEncoder const&) & noexcept = default;
        IBitmapEncoder& operator=(IBitmapEncoder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapEncoderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics>
    {
        IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapEncoderStatics(IBitmapEncoderStatics const&) noexcept = default;
        IBitmapEncoderStatics(IBitmapEncoderStatics&&) noexcept = default;
        IBitmapEncoderStatics& operator=(IBitmapEncoderStatics const&) & noexcept = default;
        IBitmapEncoderStatics& operator=(IBitmapEncoderStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapEncoderStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics2>
    {
        IBitmapEncoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapEncoderStatics2(IBitmapEncoderStatics2 const&) noexcept = default;
        IBitmapEncoderStatics2(IBitmapEncoderStatics2&&) noexcept = default;
        IBitmapEncoderStatics2& operator=(IBitmapEncoderStatics2 const&) & noexcept = default;
        IBitmapEncoderStatics2& operator=(IBitmapEncoderStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapEncoderWithSoftwareBitmap :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderWithSoftwareBitmap>
    {
        IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapEncoderWithSoftwareBitmap(IBitmapEncoderWithSoftwareBitmap const&) noexcept = default;
        IBitmapEncoderWithSoftwareBitmap(IBitmapEncoderWithSoftwareBitmap&&) noexcept = default;
        IBitmapEncoderWithSoftwareBitmap& operator=(IBitmapEncoderWithSoftwareBitmap const&) & noexcept = default;
        IBitmapEncoderWithSoftwareBitmap& operator=(IBitmapEncoderWithSoftwareBitmap&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrame>
    {
        IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapFrame(IBitmapFrame const&) noexcept = default;
        IBitmapFrame(IBitmapFrame&&) noexcept = default;
        IBitmapFrame& operator=(IBitmapFrame const&) & noexcept = default;
        IBitmapFrame& operator=(IBitmapFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapFrameWithSoftwareBitmap :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrameWithSoftwareBitmap>,
        impl::require<Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap, Windows::Graphics::Imaging::IBitmapFrame>
    {
        IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrameWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapFrameWithSoftwareBitmap(IBitmapFrameWithSoftwareBitmap const&) noexcept = default;
        IBitmapFrameWithSoftwareBitmap(IBitmapFrameWithSoftwareBitmap&&) noexcept = default;
        IBitmapFrameWithSoftwareBitmap& operator=(IBitmapFrameWithSoftwareBitmap const&) & noexcept = default;
        IBitmapFrameWithSoftwareBitmap& operator=(IBitmapFrameWithSoftwareBitmap&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapProperties>,
        impl::require<Windows::Graphics::Imaging::IBitmapProperties, Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
        IBitmapProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapProperties(IBitmapProperties const&) noexcept = default;
        IBitmapProperties(IBitmapProperties&&) noexcept = default;
        IBitmapProperties& operator=(IBitmapProperties const&) & noexcept = default;
        IBitmapProperties& operator=(IBitmapProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapPropertiesView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapPropertiesView>
    {
        IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
        IBitmapPropertiesView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapPropertiesView(IBitmapPropertiesView const&) noexcept = default;
        IBitmapPropertiesView(IBitmapPropertiesView&&) noexcept = default;
        IBitmapPropertiesView& operator=(IBitmapPropertiesView const&) & noexcept = default;
        IBitmapPropertiesView& operator=(IBitmapPropertiesView&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapTransform :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTransform>
    {
        IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
        IBitmapTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapTransform(IBitmapTransform const&) noexcept = default;
        IBitmapTransform(IBitmapTransform&&) noexcept = default;
        IBitmapTransform& operator=(IBitmapTransform const&) & noexcept = default;
        IBitmapTransform& operator=(IBitmapTransform&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapTypedValue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValue>
    {
        IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapTypedValue(IBitmapTypedValue const&) noexcept = default;
        IBitmapTypedValue(IBitmapTypedValue&&) noexcept = default;
        IBitmapTypedValue& operator=(IBitmapTypedValue const&) & noexcept = default;
        IBitmapTypedValue& operator=(IBitmapTypedValue&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBitmapTypedValueFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValueFactory>
    {
        IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValueFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBitmapTypedValueFactory(IBitmapTypedValueFactory const&) noexcept = default;
        IBitmapTypedValueFactory(IBitmapTypedValueFactory&&) noexcept = default;
        IBitmapTypedValueFactory& operator=(IBitmapTypedValueFactory const&) & noexcept = default;
        IBitmapTypedValueFactory& operator=(IBitmapTypedValueFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPixelDataProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPixelDataProvider>
    {
        IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
        IPixelDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPixelDataProvider(IPixelDataProvider const&) noexcept = default;
        IPixelDataProvider(IPixelDataProvider&&) noexcept = default;
        IPixelDataProvider& operator=(IPixelDataProvider const&) & noexcept = default;
        IPixelDataProvider& operator=(IPixelDataProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISoftwareBitmap :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmap>,
        impl::require<Windows::Graphics::Imaging::ISoftwareBitmap, Windows::Foundation::IClosable>
    {
        ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISoftwareBitmap(ISoftwareBitmap const&) noexcept = default;
        ISoftwareBitmap(ISoftwareBitmap&&) noexcept = default;
        ISoftwareBitmap& operator=(ISoftwareBitmap const&) & noexcept = default;
        ISoftwareBitmap& operator=(ISoftwareBitmap&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISoftwareBitmapFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapFactory>
    {
        ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISoftwareBitmapFactory(ISoftwareBitmapFactory const&) noexcept = default;
        ISoftwareBitmapFactory(ISoftwareBitmapFactory&&) noexcept = default;
        ISoftwareBitmapFactory& operator=(ISoftwareBitmapFactory const&) & noexcept = default;
        ISoftwareBitmapFactory& operator=(ISoftwareBitmapFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISoftwareBitmapStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapStatics>
    {
        ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISoftwareBitmapStatics(ISoftwareBitmapStatics const&) noexcept = default;
        ISoftwareBitmapStatics(ISoftwareBitmapStatics&&) noexcept = default;
        ISoftwareBitmapStatics& operator=(ISoftwareBitmapStatics const&) & noexcept = default;
        ISoftwareBitmapStatics& operator=(ISoftwareBitmapStatics&&) & noexcept = default;
    };
}
#endif
