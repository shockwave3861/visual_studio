// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Data_Json_1_H
#define WINRT_Windows_Data_Json_1_H
#include "winrt/impl/Windows.Data.Json.0.h"
WINRT_EXPORT namespace winrt::Windows::Data::Json
{
    struct __declspec(empty_bases) IJsonArray :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonArray>,
        impl::require<Windows::Data::Json::IJsonArray, Windows::Data::Json::IJsonValue>
    {
        IJsonArray(std::nullptr_t = nullptr) noexcept {}
        IJsonArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonArray(IJsonArray const&) noexcept = default;
        IJsonArray(IJsonArray&&) noexcept = default;
        IJsonArray& operator=(IJsonArray const&) & noexcept = default;
        IJsonArray& operator=(IJsonArray&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonArrayStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonArrayStatics>
    {
        IJsonArrayStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonArrayStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonArrayStatics(IJsonArrayStatics const&) noexcept = default;
        IJsonArrayStatics(IJsonArrayStatics&&) noexcept = default;
        IJsonArrayStatics& operator=(IJsonArrayStatics const&) & noexcept = default;
        IJsonArrayStatics& operator=(IJsonArrayStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonErrorStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonErrorStatics2>
    {
        IJsonErrorStatics2(std::nullptr_t = nullptr) noexcept {}
        IJsonErrorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonErrorStatics2(IJsonErrorStatics2 const&) noexcept = default;
        IJsonErrorStatics2(IJsonErrorStatics2&&) noexcept = default;
        IJsonErrorStatics2& operator=(IJsonErrorStatics2 const&) & noexcept = default;
        IJsonErrorStatics2& operator=(IJsonErrorStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonObject :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObject>,
        impl::require<Windows::Data::Json::IJsonObject, Windows::Data::Json::IJsonValue>
    {
        IJsonObject(std::nullptr_t = nullptr) noexcept {}
        IJsonObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonObject(IJsonObject const&) noexcept = default;
        IJsonObject(IJsonObject&&) noexcept = default;
        IJsonObject& operator=(IJsonObject const&) & noexcept = default;
        IJsonObject& operator=(IJsonObject&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonObjectStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObjectStatics>
    {
        IJsonObjectStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonObjectStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonObjectStatics(IJsonObjectStatics const&) noexcept = default;
        IJsonObjectStatics(IJsonObjectStatics&&) noexcept = default;
        IJsonObjectStatics& operator=(IJsonObjectStatics const&) & noexcept = default;
        IJsonObjectStatics& operator=(IJsonObjectStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonObjectWithDefaultValues :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObjectWithDefaultValues>,
        impl::require<Windows::Data::Json::IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonValue, Windows::Data::Json::IJsonObject>
    {
        IJsonObjectWithDefaultValues(std::nullptr_t = nullptr) noexcept {}
        IJsonObjectWithDefaultValues(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonObjectWithDefaultValues(IJsonObjectWithDefaultValues const&) noexcept = default;
        IJsonObjectWithDefaultValues(IJsonObjectWithDefaultValues&&) noexcept = default;
        IJsonObjectWithDefaultValues& operator=(IJsonObjectWithDefaultValues const&) & noexcept = default;
        IJsonObjectWithDefaultValues& operator=(IJsonObjectWithDefaultValues&&) & noexcept = default;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedArray;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedArray;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedBoolean;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedBoolean;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedNumber;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedNumber;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedObject;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedObject;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedString;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedString;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedValue;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedValue;
    };
    struct __declspec(empty_bases) IJsonValue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValue>
    {
        IJsonValue(std::nullptr_t = nullptr) noexcept {}
        IJsonValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonValue(IJsonValue const&) noexcept = default;
        IJsonValue(IJsonValue&&) noexcept = default;
        IJsonValue& operator=(IJsonValue const&) & noexcept = default;
        IJsonValue& operator=(IJsonValue&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonValueStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValueStatics>
    {
        IJsonValueStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonValueStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonValueStatics(IJsonValueStatics const&) noexcept = default;
        IJsonValueStatics(IJsonValueStatics&&) noexcept = default;
        IJsonValueStatics& operator=(IJsonValueStatics const&) & noexcept = default;
        IJsonValueStatics& operator=(IJsonValueStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IJsonValueStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValueStatics2>
    {
        IJsonValueStatics2(std::nullptr_t = nullptr) noexcept {}
        IJsonValueStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IJsonValueStatics2(IJsonValueStatics2 const&) noexcept = default;
        IJsonValueStatics2(IJsonValueStatics2&&) noexcept = default;
        IJsonValueStatics2& operator=(IJsonValueStatics2 const&) & noexcept = default;
        IJsonValueStatics2& operator=(IJsonValueStatics2&&) & noexcept = default;
    };
}
#endif
