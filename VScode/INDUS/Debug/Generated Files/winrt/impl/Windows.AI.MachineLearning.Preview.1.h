// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_AI_MachineLearning_Preview_1_H
#define WINRT_Windows_AI_MachineLearning_Preview_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.AI.MachineLearning.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning::Preview
{
    struct __declspec(empty_bases) IImageVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        IImageVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        IImageVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IImageVariableDescriptorPreview(IImageVariableDescriptorPreview const&) noexcept = default;
        IImageVariableDescriptorPreview(IImageVariableDescriptorPreview&&) noexcept = default;
        IImageVariableDescriptorPreview& operator=(IImageVariableDescriptorPreview const&) & noexcept = default;
        IImageVariableDescriptorPreview& operator=(IImageVariableDescriptorPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInferencingOptionsPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInferencingOptionsPreview>
    {
        IInferencingOptionsPreview(std::nullptr_t = nullptr) noexcept {}
        IInferencingOptionsPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInferencingOptionsPreview(IInferencingOptionsPreview const&) noexcept = default;
        IInferencingOptionsPreview(IInferencingOptionsPreview&&) noexcept = default;
        IInferencingOptionsPreview& operator=(IInferencingOptionsPreview const&) & noexcept = default;
        IInferencingOptionsPreview& operator=(IInferencingOptionsPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelBindingPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelBindingPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
    {
        ILearningModelBindingPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelBindingPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelBindingPreview(ILearningModelBindingPreview const&) noexcept = default;
        ILearningModelBindingPreview(ILearningModelBindingPreview&&) noexcept = default;
        ILearningModelBindingPreview& operator=(ILearningModelBindingPreview const&) & noexcept = default;
        ILearningModelBindingPreview& operator=(ILearningModelBindingPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelBindingPreviewFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelBindingPreviewFactory>
    {
        ILearningModelBindingPreviewFactory(std::nullptr_t = nullptr) noexcept {}
        ILearningModelBindingPreviewFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelBindingPreviewFactory(ILearningModelBindingPreviewFactory const&) noexcept = default;
        ILearningModelBindingPreviewFactory(ILearningModelBindingPreviewFactory&&) noexcept = default;
        ILearningModelBindingPreviewFactory& operator=(ILearningModelBindingPreviewFactory const&) & noexcept = default;
        ILearningModelBindingPreviewFactory& operator=(ILearningModelBindingPreviewFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelDescriptionPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelDescriptionPreview>
    {
        ILearningModelDescriptionPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelDescriptionPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelDescriptionPreview(ILearningModelDescriptionPreview const&) noexcept = default;
        ILearningModelDescriptionPreview(ILearningModelDescriptionPreview&&) noexcept = default;
        ILearningModelDescriptionPreview& operator=(ILearningModelDescriptionPreview const&) & noexcept = default;
        ILearningModelDescriptionPreview& operator=(ILearningModelDescriptionPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelEvaluationResultPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelEvaluationResultPreview>
    {
        ILearningModelEvaluationResultPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelEvaluationResultPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelEvaluationResultPreview(ILearningModelEvaluationResultPreview const&) noexcept = default;
        ILearningModelEvaluationResultPreview(ILearningModelEvaluationResultPreview&&) noexcept = default;
        ILearningModelEvaluationResultPreview& operator=(ILearningModelEvaluationResultPreview const&) & noexcept = default;
        ILearningModelEvaluationResultPreview& operator=(ILearningModelEvaluationResultPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelPreview>
    {
        ILearningModelPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelPreview(ILearningModelPreview const&) noexcept = default;
        ILearningModelPreview(ILearningModelPreview&&) noexcept = default;
        ILearningModelPreview& operator=(ILearningModelPreview const&) & noexcept = default;
        ILearningModelPreview& operator=(ILearningModelPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelPreviewStatics>
    {
        ILearningModelPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ILearningModelPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelPreviewStatics(ILearningModelPreviewStatics const&) noexcept = default;
        ILearningModelPreviewStatics(ILearningModelPreviewStatics&&) noexcept = default;
        ILearningModelPreviewStatics& operator=(ILearningModelPreviewStatics const&) & noexcept = default;
        ILearningModelPreviewStatics& operator=(ILearningModelPreviewStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILearningModelVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelVariableDescriptorPreview>
    {
        ILearningModelVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILearningModelVariableDescriptorPreview(ILearningModelVariableDescriptorPreview const&) noexcept = default;
        ILearningModelVariableDescriptorPreview(ILearningModelVariableDescriptorPreview&&) noexcept = default;
        ILearningModelVariableDescriptorPreview& operator=(ILearningModelVariableDescriptorPreview const&) & noexcept = default;
        ILearningModelVariableDescriptorPreview& operator=(ILearningModelVariableDescriptorPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMapVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMapVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        IMapVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        IMapVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMapVariableDescriptorPreview(IMapVariableDescriptorPreview const&) noexcept = default;
        IMapVariableDescriptorPreview(IMapVariableDescriptorPreview&&) noexcept = default;
        IMapVariableDescriptorPreview& operator=(IMapVariableDescriptorPreview const&) & noexcept = default;
        IMapVariableDescriptorPreview& operator=(IMapVariableDescriptorPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISequenceVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISequenceVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        ISequenceVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ISequenceVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISequenceVariableDescriptorPreview(ISequenceVariableDescriptorPreview const&) noexcept = default;
        ISequenceVariableDescriptorPreview(ISequenceVariableDescriptorPreview&&) noexcept = default;
        ISequenceVariableDescriptorPreview& operator=(ISequenceVariableDescriptorPreview const&) & noexcept = default;
        ISequenceVariableDescriptorPreview& operator=(ISequenceVariableDescriptorPreview&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITensorVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITensorVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        ITensorVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ITensorVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITensorVariableDescriptorPreview(ITensorVariableDescriptorPreview const&) noexcept = default;
        ITensorVariableDescriptorPreview(ITensorVariableDescriptorPreview&&) noexcept = default;
        ITensorVariableDescriptorPreview& operator=(ITensorVariableDescriptorPreview const&) & noexcept = default;
        ITensorVariableDescriptorPreview& operator=(ITensorVariableDescriptorPreview&&) & noexcept = default;
    };
}
#endif
