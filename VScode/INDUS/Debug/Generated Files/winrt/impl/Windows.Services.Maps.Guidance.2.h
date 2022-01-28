// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Services_Maps_Guidance_2_H
#define WINRT_Windows_Services_Maps_Guidance_2_H
#include "winrt/impl/Windows.Services.Maps.1.h"
#include "winrt/impl/Windows.Services.Maps.Guidance.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Maps::Guidance
{
    struct __declspec(empty_bases) GuidanceAudioNotificationRequestedEventArgs : Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs
    {
        GuidanceAudioNotificationRequestedEventArgs(std::nullptr_t) noexcept {}
        GuidanceAudioNotificationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs(ptr, take_ownership_from_abi) {}
        GuidanceAudioNotificationRequestedEventArgs(GuidanceAudioNotificationRequestedEventArgs const&) noexcept = default;
        GuidanceAudioNotificationRequestedEventArgs(GuidanceAudioNotificationRequestedEventArgs&&) noexcept = default;
        GuidanceAudioNotificationRequestedEventArgs& operator=(GuidanceAudioNotificationRequestedEventArgs const&) & noexcept = default;
        GuidanceAudioNotificationRequestedEventArgs& operator=(GuidanceAudioNotificationRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceLaneInfo : Windows::Services::Maps::Guidance::IGuidanceLaneInfo
    {
        GuidanceLaneInfo(std::nullptr_t) noexcept {}
        GuidanceLaneInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceLaneInfo(ptr, take_ownership_from_abi) {}
        GuidanceLaneInfo(GuidanceLaneInfo const&) noexcept = default;
        GuidanceLaneInfo(GuidanceLaneInfo&&) noexcept = default;
        GuidanceLaneInfo& operator=(GuidanceLaneInfo const&) & noexcept = default;
        GuidanceLaneInfo& operator=(GuidanceLaneInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceManeuver : Windows::Services::Maps::Guidance::IGuidanceManeuver
    {
        GuidanceManeuver(std::nullptr_t) noexcept {}
        GuidanceManeuver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceManeuver(ptr, take_ownership_from_abi) {}
        GuidanceManeuver(GuidanceManeuver const&) noexcept = default;
        GuidanceManeuver(GuidanceManeuver&&) noexcept = default;
        GuidanceManeuver& operator=(GuidanceManeuver const&) & noexcept = default;
        GuidanceManeuver& operator=(GuidanceManeuver&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceMapMatchedCoordinate : Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate
    {
        GuidanceMapMatchedCoordinate(std::nullptr_t) noexcept {}
        GuidanceMapMatchedCoordinate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate(ptr, take_ownership_from_abi) {}
        GuidanceMapMatchedCoordinate(GuidanceMapMatchedCoordinate const&) noexcept = default;
        GuidanceMapMatchedCoordinate(GuidanceMapMatchedCoordinate&&) noexcept = default;
        GuidanceMapMatchedCoordinate& operator=(GuidanceMapMatchedCoordinate const&) & noexcept = default;
        GuidanceMapMatchedCoordinate& operator=(GuidanceMapMatchedCoordinate&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceNavigator : Windows::Services::Maps::Guidance::IGuidanceNavigator,
        impl::require<GuidanceNavigator, Windows::Services::Maps::Guidance::IGuidanceNavigator2>
    {
        GuidanceNavigator(std::nullptr_t) noexcept {}
        GuidanceNavigator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceNavigator(ptr, take_ownership_from_abi) {}
        GuidanceNavigator(GuidanceNavigator const&) noexcept = default;
        GuidanceNavigator(GuidanceNavigator&&) noexcept = default;
        GuidanceNavigator& operator=(GuidanceNavigator const&) & noexcept = default;
        GuidanceNavigator& operator=(GuidanceNavigator&&) & noexcept = default;
        static auto GetCurrent();
        [[nodiscard]] static auto UseAppProvidedVoice();
    };
    struct __declspec(empty_bases) GuidanceReroutedEventArgs : Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs
    {
        GuidanceReroutedEventArgs(std::nullptr_t) noexcept {}
        GuidanceReroutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs(ptr, take_ownership_from_abi) {}
        GuidanceReroutedEventArgs(GuidanceReroutedEventArgs const&) noexcept = default;
        GuidanceReroutedEventArgs(GuidanceReroutedEventArgs&&) noexcept = default;
        GuidanceReroutedEventArgs& operator=(GuidanceReroutedEventArgs const&) & noexcept = default;
        GuidanceReroutedEventArgs& operator=(GuidanceReroutedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceRoadSegment : Windows::Services::Maps::Guidance::IGuidanceRoadSegment,
        impl::require<GuidanceRoadSegment, Windows::Services::Maps::Guidance::IGuidanceRoadSegment2>
    {
        GuidanceRoadSegment(std::nullptr_t) noexcept {}
        GuidanceRoadSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceRoadSegment(ptr, take_ownership_from_abi) {}
        GuidanceRoadSegment(GuidanceRoadSegment const&) noexcept = default;
        GuidanceRoadSegment(GuidanceRoadSegment&&) noexcept = default;
        GuidanceRoadSegment& operator=(GuidanceRoadSegment const&) & noexcept = default;
        GuidanceRoadSegment& operator=(GuidanceRoadSegment&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceRoadSignpost : Windows::Services::Maps::Guidance::IGuidanceRoadSignpost
    {
        GuidanceRoadSignpost(std::nullptr_t) noexcept {}
        GuidanceRoadSignpost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceRoadSignpost(ptr, take_ownership_from_abi) {}
        GuidanceRoadSignpost(GuidanceRoadSignpost const&) noexcept = default;
        GuidanceRoadSignpost(GuidanceRoadSignpost&&) noexcept = default;
        GuidanceRoadSignpost& operator=(GuidanceRoadSignpost const&) & noexcept = default;
        GuidanceRoadSignpost& operator=(GuidanceRoadSignpost&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GuidanceRoute : Windows::Services::Maps::Guidance::IGuidanceRoute
    {
        GuidanceRoute(std::nullptr_t) noexcept {}
        GuidanceRoute(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceRoute(ptr, take_ownership_from_abi) {}
        GuidanceRoute(GuidanceRoute const&) noexcept = default;
        GuidanceRoute(GuidanceRoute&&) noexcept = default;
        GuidanceRoute& operator=(GuidanceRoute const&) & noexcept = default;
        GuidanceRoute& operator=(GuidanceRoute&&) & noexcept = default;
        static auto CanCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute);
        static auto TryCreateFromMapRoute(Windows::Services::Maps::MapRoute const& mapRoute);
    };
    struct __declspec(empty_bases) GuidanceTelemetryCollector : Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector
    {
        GuidanceTelemetryCollector(std::nullptr_t) noexcept {}
        GuidanceTelemetryCollector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector(ptr, take_ownership_from_abi) {}
        GuidanceTelemetryCollector(GuidanceTelemetryCollector const&) noexcept = default;
        GuidanceTelemetryCollector(GuidanceTelemetryCollector&&) noexcept = default;
        GuidanceTelemetryCollector& operator=(GuidanceTelemetryCollector const&) & noexcept = default;
        GuidanceTelemetryCollector& operator=(GuidanceTelemetryCollector&&) & noexcept = default;
        static auto GetCurrent();
    };
    struct __declspec(empty_bases) GuidanceUpdatedEventArgs : Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs
    {
        GuidanceUpdatedEventArgs(std::nullptr_t) noexcept {}
        GuidanceUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs(ptr, take_ownership_from_abi) {}
        GuidanceUpdatedEventArgs(GuidanceUpdatedEventArgs const&) noexcept = default;
        GuidanceUpdatedEventArgs(GuidanceUpdatedEventArgs&&) noexcept = default;
        GuidanceUpdatedEventArgs& operator=(GuidanceUpdatedEventArgs const&) & noexcept = default;
        GuidanceUpdatedEventArgs& operator=(GuidanceUpdatedEventArgs&&) & noexcept = default;
    };
}
#endif
