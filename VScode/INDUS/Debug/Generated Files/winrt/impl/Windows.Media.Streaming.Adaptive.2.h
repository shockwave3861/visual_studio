// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Media_Streaming_Adaptive_2_H
#define WINRT_Windows_Media_Streaming_Adaptive_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive
{
    struct __declspec(empty_bases) AdaptiveMediaSource : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource,
        impl::require<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3, Windows::Foundation::IClosable>
    {
        AdaptiveMediaSource(std::nullptr_t) noexcept {}
        AdaptiveMediaSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSource(AdaptiveMediaSource const&) noexcept = default;
        AdaptiveMediaSource(AdaptiveMediaSource&&) noexcept = default;
        AdaptiveMediaSource& operator=(AdaptiveMediaSource const&) & noexcept = default;
        AdaptiveMediaSource& operator=(AdaptiveMediaSource&&) & noexcept = default;
        static auto IsContentTypeSupported(param::hstring const& contentType);
        static auto CreateFromUriAsync(Windows::Foundation::Uri const& uri);
        static auto CreateFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpClient const& httpClient);
        static auto CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType);
        static auto CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType, Windows::Web::Http::HttpClient const& httpClient);
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceAdvancedSettings : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings
    {
        AdaptiveMediaSourceAdvancedSettings(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceAdvancedSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceAdvancedSettings(AdaptiveMediaSourceAdvancedSettings const&) noexcept = default;
        AdaptiveMediaSourceAdvancedSettings(AdaptiveMediaSourceAdvancedSettings&&) noexcept = default;
        AdaptiveMediaSourceAdvancedSettings& operator=(AdaptiveMediaSourceAdvancedSettings const&) & noexcept = default;
        AdaptiveMediaSourceAdvancedSettings& operator=(AdaptiveMediaSourceAdvancedSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceCorrelatedTimes : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes
    {
        AdaptiveMediaSourceCorrelatedTimes(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceCorrelatedTimes(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceCorrelatedTimes(AdaptiveMediaSourceCorrelatedTimes const&) noexcept = default;
        AdaptiveMediaSourceCorrelatedTimes(AdaptiveMediaSourceCorrelatedTimes&&) noexcept = default;
        AdaptiveMediaSourceCorrelatedTimes& operator=(AdaptiveMediaSourceCorrelatedTimes const&) & noexcept = default;
        AdaptiveMediaSourceCorrelatedTimes& operator=(AdaptiveMediaSourceCorrelatedTimes&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceCreationResult : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult,
        impl::require<AdaptiveMediaSourceCreationResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2>
    {
        AdaptiveMediaSourceCreationResult(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceCreationResult(AdaptiveMediaSourceCreationResult const&) noexcept = default;
        AdaptiveMediaSourceCreationResult(AdaptiveMediaSourceCreationResult&&) noexcept = default;
        AdaptiveMediaSourceCreationResult& operator=(AdaptiveMediaSourceCreationResult const&) & noexcept = default;
        AdaptiveMediaSourceCreationResult& operator=(AdaptiveMediaSourceCreationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDiagnosticAvailableEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs,
        impl::require<AdaptiveMediaSourceDiagnosticAvailableEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs3>
    {
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(AdaptiveMediaSourceDiagnosticAvailableEventArgs const&) noexcept = default;
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(AdaptiveMediaSourceDiagnosticAvailableEventArgs&&) noexcept = default;
        AdaptiveMediaSourceDiagnosticAvailableEventArgs& operator=(AdaptiveMediaSourceDiagnosticAvailableEventArgs const&) & noexcept = default;
        AdaptiveMediaSourceDiagnosticAvailableEventArgs& operator=(AdaptiveMediaSourceDiagnosticAvailableEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDiagnostics : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics
    {
        AdaptiveMediaSourceDiagnostics(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDiagnostics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDiagnostics(AdaptiveMediaSourceDiagnostics const&) noexcept = default;
        AdaptiveMediaSourceDiagnostics(AdaptiveMediaSourceDiagnostics&&) noexcept = default;
        AdaptiveMediaSourceDiagnostics& operator=(AdaptiveMediaSourceDiagnostics const&) & noexcept = default;
        AdaptiveMediaSourceDiagnostics& operator=(AdaptiveMediaSourceDiagnostics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadBitrateChangedEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadBitrateChangedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
    {
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(AdaptiveMediaSourceDownloadBitrateChangedEventArgs const&) noexcept = default;
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(AdaptiveMediaSourceDownloadBitrateChangedEventArgs&&) noexcept = default;
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs& operator=(AdaptiveMediaSourceDownloadBitrateChangedEventArgs const&) & noexcept = default;
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs& operator=(AdaptiveMediaSourceDownloadBitrateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadCompletedEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadCompletedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs3>
    {
        AdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadCompletedEventArgs(AdaptiveMediaSourceDownloadCompletedEventArgs const&) noexcept = default;
        AdaptiveMediaSourceDownloadCompletedEventArgs(AdaptiveMediaSourceDownloadCompletedEventArgs&&) noexcept = default;
        AdaptiveMediaSourceDownloadCompletedEventArgs& operator=(AdaptiveMediaSourceDownloadCompletedEventArgs const&) & noexcept = default;
        AdaptiveMediaSourceDownloadCompletedEventArgs& operator=(AdaptiveMediaSourceDownloadCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadFailedEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadFailedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs3>
    {
        AdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadFailedEventArgs(AdaptiveMediaSourceDownloadFailedEventArgs const&) noexcept = default;
        AdaptiveMediaSourceDownloadFailedEventArgs(AdaptiveMediaSourceDownloadFailedEventArgs&&) noexcept = default;
        AdaptiveMediaSourceDownloadFailedEventArgs& operator=(AdaptiveMediaSourceDownloadFailedEventArgs const&) & noexcept = default;
        AdaptiveMediaSourceDownloadFailedEventArgs& operator=(AdaptiveMediaSourceDownloadFailedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadRequestedDeferral : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral
    {
        AdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadRequestedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadRequestedDeferral(AdaptiveMediaSourceDownloadRequestedDeferral const&) noexcept = default;
        AdaptiveMediaSourceDownloadRequestedDeferral(AdaptiveMediaSourceDownloadRequestedDeferral&&) noexcept = default;
        AdaptiveMediaSourceDownloadRequestedDeferral& operator=(AdaptiveMediaSourceDownloadRequestedDeferral const&) & noexcept = default;
        AdaptiveMediaSourceDownloadRequestedDeferral& operator=(AdaptiveMediaSourceDownloadRequestedDeferral&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadRequestedEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadRequestedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs3>
    {
        AdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadRequestedEventArgs(AdaptiveMediaSourceDownloadRequestedEventArgs const&) noexcept = default;
        AdaptiveMediaSourceDownloadRequestedEventArgs(AdaptiveMediaSourceDownloadRequestedEventArgs&&) noexcept = default;
        AdaptiveMediaSourceDownloadRequestedEventArgs& operator=(AdaptiveMediaSourceDownloadRequestedEventArgs const&) & noexcept = default;
        AdaptiveMediaSourceDownloadRequestedEventArgs& operator=(AdaptiveMediaSourceDownloadRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadResult : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult,
        impl::require<AdaptiveMediaSourceDownloadResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
    {
        AdaptiveMediaSourceDownloadResult(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadResult(AdaptiveMediaSourceDownloadResult const&) noexcept = default;
        AdaptiveMediaSourceDownloadResult(AdaptiveMediaSourceDownloadResult&&) noexcept = default;
        AdaptiveMediaSourceDownloadResult& operator=(AdaptiveMediaSourceDownloadResult const&) & noexcept = default;
        AdaptiveMediaSourceDownloadResult& operator=(AdaptiveMediaSourceDownloadResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadStatistics : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics
    {
        AdaptiveMediaSourceDownloadStatistics(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadStatistics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourceDownloadStatistics(AdaptiveMediaSourceDownloadStatistics const&) noexcept = default;
        AdaptiveMediaSourceDownloadStatistics(AdaptiveMediaSourceDownloadStatistics&&) noexcept = default;
        AdaptiveMediaSourceDownloadStatistics& operator=(AdaptiveMediaSourceDownloadStatistics const&) & noexcept = default;
        AdaptiveMediaSourceDownloadStatistics& operator=(AdaptiveMediaSourceDownloadStatistics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdaptiveMediaSourcePlaybackBitrateChangedEventArgs : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
    {
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(ptr, take_ownership_from_abi) {}
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(AdaptiveMediaSourcePlaybackBitrateChangedEventArgs const&) noexcept = default;
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(AdaptiveMediaSourcePlaybackBitrateChangedEventArgs&&) noexcept = default;
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs& operator=(AdaptiveMediaSourcePlaybackBitrateChangedEventArgs const&) & noexcept = default;
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs& operator=(AdaptiveMediaSourcePlaybackBitrateChangedEventArgs&&) & noexcept = default;
    };
}
#endif
