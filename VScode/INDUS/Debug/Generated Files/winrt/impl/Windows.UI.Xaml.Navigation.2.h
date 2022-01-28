// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_UI_Xaml_Navigation_2_H
#define WINRT_Windows_UI_Xaml_Navigation_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation
{
    struct LoadCompletedEventHandler : Windows::Foundation::IUnknown
    {
        LoadCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
        LoadCompletedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        LoadCompletedEventHandler(LoadCompletedEventHandler const&) noexcept = default;
        LoadCompletedEventHandler(LoadCompletedEventHandler&&) noexcept = default;
        LoadCompletedEventHandler& operator=(LoadCompletedEventHandler const&) & noexcept = default;
        LoadCompletedEventHandler& operator=(LoadCompletedEventHandler&&) & noexcept = default;
        template <typename L> LoadCompletedEventHandler(L lambda);
        template <typename F> LoadCompletedEventHandler(F* function);
        template <typename O, typename M> LoadCompletedEventHandler(O* object, M method);
        template <typename O, typename M> LoadCompletedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> LoadCompletedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct NavigatedEventHandler : Windows::Foundation::IUnknown
    {
        NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        NavigatedEventHandler(NavigatedEventHandler const&) noexcept = default;
        NavigatedEventHandler(NavigatedEventHandler&&) noexcept = default;
        NavigatedEventHandler& operator=(NavigatedEventHandler const&) & noexcept = default;
        NavigatedEventHandler& operator=(NavigatedEventHandler&&) & noexcept = default;
        template <typename L> NavigatedEventHandler(L lambda);
        template <typename F> NavigatedEventHandler(F* function);
        template <typename O, typename M> NavigatedEventHandler(O* object, M method);
        template <typename O, typename M> NavigatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct NavigatingCancelEventHandler : Windows::Foundation::IUnknown
    {
        NavigatingCancelEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigatingCancelEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        NavigatingCancelEventHandler(NavigatingCancelEventHandler const&) noexcept = default;
        NavigatingCancelEventHandler(NavigatingCancelEventHandler&&) noexcept = default;
        NavigatingCancelEventHandler& operator=(NavigatingCancelEventHandler const&) & noexcept = default;
        NavigatingCancelEventHandler& operator=(NavigatingCancelEventHandler&&) & noexcept = default;
        template <typename L> NavigatingCancelEventHandler(L lambda);
        template <typename F> NavigatingCancelEventHandler(F* function);
        template <typename O, typename M> NavigatingCancelEventHandler(O* object, M method);
        template <typename O, typename M> NavigatingCancelEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigatingCancelEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const;
    };
    struct NavigationFailedEventHandler : Windows::Foundation::IUnknown
    {
        NavigationFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigationFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        NavigationFailedEventHandler(NavigationFailedEventHandler const&) noexcept = default;
        NavigationFailedEventHandler(NavigationFailedEventHandler&&) noexcept = default;
        NavigationFailedEventHandler& operator=(NavigationFailedEventHandler const&) & noexcept = default;
        NavigationFailedEventHandler& operator=(NavigationFailedEventHandler&&) & noexcept = default;
        template <typename L> NavigationFailedEventHandler(L lambda);
        template <typename F> NavigationFailedEventHandler(F* function);
        template <typename O, typename M> NavigationFailedEventHandler(O* object, M method);
        template <typename O, typename M> NavigationFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigationFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& e) const;
    };
    struct NavigationStoppedEventHandler : Windows::Foundation::IUnknown
    {
        NavigationStoppedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigationStoppedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        NavigationStoppedEventHandler(NavigationStoppedEventHandler const&) noexcept = default;
        NavigationStoppedEventHandler(NavigationStoppedEventHandler&&) noexcept = default;
        NavigationStoppedEventHandler& operator=(NavigationStoppedEventHandler const&) & noexcept = default;
        NavigationStoppedEventHandler& operator=(NavigationStoppedEventHandler&&) & noexcept = default;
        template <typename L> NavigationStoppedEventHandler(L lambda);
        template <typename F> NavigationStoppedEventHandler(F* function);
        template <typename O, typename M> NavigationStoppedEventHandler(O* object, M method);
        template <typename O, typename M> NavigationStoppedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigationStoppedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct __declspec(empty_bases) FrameNavigationOptions : Windows::UI::Xaml::Navigation::IFrameNavigationOptions
    {
        FrameNavigationOptions(std::nullptr_t) noexcept {}
        FrameNavigationOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Navigation::IFrameNavigationOptions(ptr, take_ownership_from_abi) {}
        FrameNavigationOptions();
        FrameNavigationOptions(FrameNavigationOptions const&) noexcept = default;
        FrameNavigationOptions(FrameNavigationOptions&&) noexcept = default;
        FrameNavigationOptions& operator=(FrameNavigationOptions const&) & noexcept = default;
        FrameNavigationOptions& operator=(FrameNavigationOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) NavigatingCancelEventArgs : Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs,
        impl::require<NavigatingCancelEventArgs, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        NavigatingCancelEventArgs(std::nullptr_t) noexcept {}
        NavigatingCancelEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs(ptr, take_ownership_from_abi) {}
        NavigatingCancelEventArgs(NavigatingCancelEventArgs const&) noexcept = default;
        NavigatingCancelEventArgs(NavigatingCancelEventArgs&&) noexcept = default;
        NavigatingCancelEventArgs& operator=(NavigatingCancelEventArgs const&) & noexcept = default;
        NavigatingCancelEventArgs& operator=(NavigatingCancelEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) NavigationEventArgs : Windows::UI::Xaml::Navigation::INavigationEventArgs,
        impl::require<NavigationEventArgs, Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        NavigationEventArgs(std::nullptr_t) noexcept {}
        NavigationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Navigation::INavigationEventArgs(ptr, take_ownership_from_abi) {}
        NavigationEventArgs(NavigationEventArgs const&) noexcept = default;
        NavigationEventArgs(NavigationEventArgs&&) noexcept = default;
        NavigationEventArgs& operator=(NavigationEventArgs const&) & noexcept = default;
        NavigationEventArgs& operator=(NavigationEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) NavigationFailedEventArgs : Windows::UI::Xaml::Navigation::INavigationFailedEventArgs
    {
        NavigationFailedEventArgs(std::nullptr_t) noexcept {}
        NavigationFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Navigation::INavigationFailedEventArgs(ptr, take_ownership_from_abi) {}
        NavigationFailedEventArgs(NavigationFailedEventArgs const&) noexcept = default;
        NavigationFailedEventArgs(NavigationFailedEventArgs&&) noexcept = default;
        NavigationFailedEventArgs& operator=(NavigationFailedEventArgs const&) & noexcept = default;
        NavigationFailedEventArgs& operator=(NavigationFailedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PageStackEntry : Windows::UI::Xaml::Navigation::IPageStackEntry,
        impl::base<PageStackEntry, Windows::UI::Xaml::DependencyObject>,
        impl::require<PageStackEntry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PageStackEntry(std::nullptr_t) noexcept {}
        PageStackEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Navigation::IPageStackEntry(ptr, take_ownership_from_abi) {}
        PageStackEntry(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo);
        PageStackEntry(PageStackEntry const&) noexcept = default;
        PageStackEntry(PageStackEntry&&) noexcept = default;
        PageStackEntry& operator=(PageStackEntry const&) & noexcept = default;
        PageStackEntry& operator=(PageStackEntry&&) & noexcept = default;
        [[nodiscard]] static auto SourcePageTypeProperty();
    };
}
#endif
