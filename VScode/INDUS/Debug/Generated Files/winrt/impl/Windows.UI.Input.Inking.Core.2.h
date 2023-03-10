// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_UI_Input_Inking_Core_2_H
#define WINRT_Windows_UI_Input_Inking_Core_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core
{
    struct __declspec(empty_bases) CoreIncrementalInkStroke : Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke
    {
        CoreIncrementalInkStroke(std::nullptr_t) noexcept {}
        CoreIncrementalInkStroke(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke(ptr, take_ownership_from_abi) {}
        CoreIncrementalInkStroke(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform);
        CoreIncrementalInkStroke(CoreIncrementalInkStroke const&) noexcept = default;
        CoreIncrementalInkStroke(CoreIncrementalInkStroke&&) noexcept = default;
        CoreIncrementalInkStroke& operator=(CoreIncrementalInkStroke const&) & noexcept = default;
        CoreIncrementalInkStroke& operator=(CoreIncrementalInkStroke&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CoreInkIndependentInputSource : Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource
    {
        CoreInkIndependentInputSource(std::nullptr_t) noexcept {}
        CoreInkIndependentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource(ptr, take_ownership_from_abi) {}
        CoreInkIndependentInputSource(CoreInkIndependentInputSource const&) noexcept = default;
        CoreInkIndependentInputSource(CoreInkIndependentInputSource&&) noexcept = default;
        CoreInkIndependentInputSource& operator=(CoreInkIndependentInputSource const&) & noexcept = default;
        CoreInkIndependentInputSource& operator=(CoreInkIndependentInputSource&&) & noexcept = default;
        static auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
    };
    struct __declspec(empty_bases) CoreInkPresenterHost : Windows::UI::Input::Inking::Core::ICoreInkPresenterHost
    {
        CoreInkPresenterHost(std::nullptr_t) noexcept {}
        CoreInkPresenterHost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreInkPresenterHost(ptr, take_ownership_from_abi) {}
        CoreInkPresenterHost();
        CoreInkPresenterHost(CoreInkPresenterHost const&) noexcept = default;
        CoreInkPresenterHost(CoreInkPresenterHost&&) noexcept = default;
        CoreInkPresenterHost& operator=(CoreInkPresenterHost const&) & noexcept = default;
        CoreInkPresenterHost& operator=(CoreInkPresenterHost&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CoreWetStrokeUpdateEventArgs : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs
    {
        CoreWetStrokeUpdateEventArgs(std::nullptr_t) noexcept {}
        CoreWetStrokeUpdateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs(ptr, take_ownership_from_abi) {}
        CoreWetStrokeUpdateEventArgs(CoreWetStrokeUpdateEventArgs const&) noexcept = default;
        CoreWetStrokeUpdateEventArgs(CoreWetStrokeUpdateEventArgs&&) noexcept = default;
        CoreWetStrokeUpdateEventArgs& operator=(CoreWetStrokeUpdateEventArgs const&) & noexcept = default;
        CoreWetStrokeUpdateEventArgs& operator=(CoreWetStrokeUpdateEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CoreWetStrokeUpdateSource : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource
    {
        CoreWetStrokeUpdateSource(std::nullptr_t) noexcept {}
        CoreWetStrokeUpdateSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource(ptr, take_ownership_from_abi) {}
        CoreWetStrokeUpdateSource(CoreWetStrokeUpdateSource const&) noexcept = default;
        CoreWetStrokeUpdateSource(CoreWetStrokeUpdateSource&&) noexcept = default;
        CoreWetStrokeUpdateSource& operator=(CoreWetStrokeUpdateSource const&) & noexcept = default;
        CoreWetStrokeUpdateSource& operator=(CoreWetStrokeUpdateSource&&) & noexcept = default;
        static auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
    };
}
#endif
