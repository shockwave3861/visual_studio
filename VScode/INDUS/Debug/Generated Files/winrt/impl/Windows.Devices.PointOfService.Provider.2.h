// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Devices_PointOfService_Provider_2_H
#define WINRT_Windows_Devices_PointOfService_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.PointOfService.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider
{
    struct __declspec(empty_bases) BarcodeScannerDisableScannerRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest,
        impl::require<BarcodeScannerDisableScannerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        BarcodeScannerDisableScannerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerDisableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerDisableScannerRequest(BarcodeScannerDisableScannerRequest const&) noexcept = default;
        BarcodeScannerDisableScannerRequest(BarcodeScannerDisableScannerRequest&&) noexcept = default;
        BarcodeScannerDisableScannerRequest& operator=(BarcodeScannerDisableScannerRequest const&) & noexcept = default;
        BarcodeScannerDisableScannerRequest& operator=(BarcodeScannerDisableScannerRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerDisableScannerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerDisableScannerRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs
    {
        BarcodeScannerDisableScannerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerDisableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerDisableScannerRequestEventArgs(BarcodeScannerDisableScannerRequestEventArgs const&) noexcept = default;
        BarcodeScannerDisableScannerRequestEventArgs(BarcodeScannerDisableScannerRequestEventArgs&&) noexcept = default;
        BarcodeScannerDisableScannerRequestEventArgs& operator=(BarcodeScannerDisableScannerRequestEventArgs const&) & noexcept = default;
        BarcodeScannerDisableScannerRequestEventArgs& operator=(BarcodeScannerDisableScannerRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerEnableScannerRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest,
        impl::require<BarcodeScannerEnableScannerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        BarcodeScannerEnableScannerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerEnableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerEnableScannerRequest(BarcodeScannerEnableScannerRequest const&) noexcept = default;
        BarcodeScannerEnableScannerRequest(BarcodeScannerEnableScannerRequest&&) noexcept = default;
        BarcodeScannerEnableScannerRequest& operator=(BarcodeScannerEnableScannerRequest const&) & noexcept = default;
        BarcodeScannerEnableScannerRequest& operator=(BarcodeScannerEnableScannerRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerEnableScannerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerEnableScannerRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs
    {
        BarcodeScannerEnableScannerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerEnableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerEnableScannerRequestEventArgs(BarcodeScannerEnableScannerRequestEventArgs const&) noexcept = default;
        BarcodeScannerEnableScannerRequestEventArgs(BarcodeScannerEnableScannerRequestEventArgs&&) noexcept = default;
        BarcodeScannerEnableScannerRequestEventArgs& operator=(BarcodeScannerEnableScannerRequestEventArgs const&) & noexcept = default;
        BarcodeScannerEnableScannerRequestEventArgs& operator=(BarcodeScannerEnableScannerRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerFrameReader : Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader,
        impl::require<BarcodeScannerFrameReader, Windows::Foundation::IClosable>
    {
        BarcodeScannerFrameReader(std::nullptr_t) noexcept {}
        BarcodeScannerFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader(ptr, take_ownership_from_abi) {}
        BarcodeScannerFrameReader(BarcodeScannerFrameReader const&) noexcept = default;
        BarcodeScannerFrameReader(BarcodeScannerFrameReader&&) noexcept = default;
        BarcodeScannerFrameReader& operator=(BarcodeScannerFrameReader const&) & noexcept = default;
        BarcodeScannerFrameReader& operator=(BarcodeScannerFrameReader&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerFrameReaderFrameArrivedEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs
    {
        BarcodeScannerFrameReaderFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerFrameReaderFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerFrameReaderFrameArrivedEventArgs(BarcodeScannerFrameReaderFrameArrivedEventArgs const&) noexcept = default;
        BarcodeScannerFrameReaderFrameArrivedEventArgs(BarcodeScannerFrameReaderFrameArrivedEventArgs&&) noexcept = default;
        BarcodeScannerFrameReaderFrameArrivedEventArgs& operator=(BarcodeScannerFrameReaderFrameArrivedEventArgs const&) & noexcept = default;
        BarcodeScannerFrameReaderFrameArrivedEventArgs& operator=(BarcodeScannerFrameReaderFrameArrivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerGetSymbologyAttributesRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest,
        impl::require<BarcodeScannerGetSymbologyAttributesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        BarcodeScannerGetSymbologyAttributesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerGetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerGetSymbologyAttributesRequest(BarcodeScannerGetSymbologyAttributesRequest const&) noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequest(BarcodeScannerGetSymbologyAttributesRequest&&) noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequest& operator=(BarcodeScannerGetSymbologyAttributesRequest const&) & noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequest& operator=(BarcodeScannerGetSymbologyAttributesRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerGetSymbologyAttributesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerGetSymbologyAttributesRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs
    {
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(BarcodeScannerGetSymbologyAttributesRequestEventArgs const&) noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(BarcodeScannerGetSymbologyAttributesRequestEventArgs&&) noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequestEventArgs& operator=(BarcodeScannerGetSymbologyAttributesRequestEventArgs const&) & noexcept = default;
        BarcodeScannerGetSymbologyAttributesRequestEventArgs& operator=(BarcodeScannerGetSymbologyAttributesRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerHideVideoPreviewRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest,
        impl::require<BarcodeScannerHideVideoPreviewRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        BarcodeScannerHideVideoPreviewRequest(std::nullptr_t) noexcept {}
        BarcodeScannerHideVideoPreviewRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerHideVideoPreviewRequest(BarcodeScannerHideVideoPreviewRequest const&) noexcept = default;
        BarcodeScannerHideVideoPreviewRequest(BarcodeScannerHideVideoPreviewRequest&&) noexcept = default;
        BarcodeScannerHideVideoPreviewRequest& operator=(BarcodeScannerHideVideoPreviewRequest const&) & noexcept = default;
        BarcodeScannerHideVideoPreviewRequest& operator=(BarcodeScannerHideVideoPreviewRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerHideVideoPreviewRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerHideVideoPreviewRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs
    {
        BarcodeScannerHideVideoPreviewRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerHideVideoPreviewRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerHideVideoPreviewRequestEventArgs(BarcodeScannerHideVideoPreviewRequestEventArgs const&) noexcept = default;
        BarcodeScannerHideVideoPreviewRequestEventArgs(BarcodeScannerHideVideoPreviewRequestEventArgs&&) noexcept = default;
        BarcodeScannerHideVideoPreviewRequestEventArgs& operator=(BarcodeScannerHideVideoPreviewRequestEventArgs const&) & noexcept = default;
        BarcodeScannerHideVideoPreviewRequestEventArgs& operator=(BarcodeScannerHideVideoPreviewRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerProviderConnection : Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection,
        impl::require<BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2, Windows::Foundation::IClosable>
    {
        BarcodeScannerProviderConnection(std::nullptr_t) noexcept {}
        BarcodeScannerProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection(ptr, take_ownership_from_abi) {}
        BarcodeScannerProviderConnection(BarcodeScannerProviderConnection const&) noexcept = default;
        BarcodeScannerProviderConnection(BarcodeScannerProviderConnection&&) noexcept = default;
        BarcodeScannerProviderConnection& operator=(BarcodeScannerProviderConnection const&) & noexcept = default;
        BarcodeScannerProviderConnection& operator=(BarcodeScannerProviderConnection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerProviderTriggerDetails : Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails
    {
        BarcodeScannerProviderTriggerDetails(std::nullptr_t) noexcept {}
        BarcodeScannerProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails(ptr, take_ownership_from_abi) {}
        BarcodeScannerProviderTriggerDetails(BarcodeScannerProviderTriggerDetails const&) noexcept = default;
        BarcodeScannerProviderTriggerDetails(BarcodeScannerProviderTriggerDetails&&) noexcept = default;
        BarcodeScannerProviderTriggerDetails& operator=(BarcodeScannerProviderTriggerDetails const&) & noexcept = default;
        BarcodeScannerProviderTriggerDetails& operator=(BarcodeScannerProviderTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerSetActiveSymbologiesRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest,
        impl::require<BarcodeScannerSetActiveSymbologiesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        BarcodeScannerSetActiveSymbologiesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerSetActiveSymbologiesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerSetActiveSymbologiesRequest(BarcodeScannerSetActiveSymbologiesRequest const&) noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequest(BarcodeScannerSetActiveSymbologiesRequest&&) noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequest& operator=(BarcodeScannerSetActiveSymbologiesRequest const&) & noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequest& operator=(BarcodeScannerSetActiveSymbologiesRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerSetActiveSymbologiesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerSetActiveSymbologiesRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs
    {
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(BarcodeScannerSetActiveSymbologiesRequestEventArgs const&) noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(BarcodeScannerSetActiveSymbologiesRequestEventArgs&&) noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequestEventArgs& operator=(BarcodeScannerSetActiveSymbologiesRequestEventArgs const&) & noexcept = default;
        BarcodeScannerSetActiveSymbologiesRequestEventArgs& operator=(BarcodeScannerSetActiveSymbologiesRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerSetSymbologyAttributesRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest,
        impl::require<BarcodeScannerSetSymbologyAttributesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        BarcodeScannerSetSymbologyAttributesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerSetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerSetSymbologyAttributesRequest(BarcodeScannerSetSymbologyAttributesRequest const&) noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequest(BarcodeScannerSetSymbologyAttributesRequest&&) noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequest& operator=(BarcodeScannerSetSymbologyAttributesRequest const&) & noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequest& operator=(BarcodeScannerSetSymbologyAttributesRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerSetSymbologyAttributesRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerSetSymbologyAttributesRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs
    {
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(BarcodeScannerSetSymbologyAttributesRequestEventArgs const&) noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(BarcodeScannerSetSymbologyAttributesRequestEventArgs&&) noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequestEventArgs& operator=(BarcodeScannerSetSymbologyAttributesRequestEventArgs const&) & noexcept = default;
        BarcodeScannerSetSymbologyAttributesRequestEventArgs& operator=(BarcodeScannerSetSymbologyAttributesRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerStartSoftwareTriggerRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest,
        impl::require<BarcodeScannerStartSoftwareTriggerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        BarcodeScannerStartSoftwareTriggerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerStartSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerStartSoftwareTriggerRequest(BarcodeScannerStartSoftwareTriggerRequest const&) noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequest(BarcodeScannerStartSoftwareTriggerRequest&&) noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequest& operator=(BarcodeScannerStartSoftwareTriggerRequest const&) & noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequest& operator=(BarcodeScannerStartSoftwareTriggerRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerStartSoftwareTriggerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerStartSoftwareTriggerRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs
    {
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(BarcodeScannerStartSoftwareTriggerRequestEventArgs const&) noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(BarcodeScannerStartSoftwareTriggerRequestEventArgs&&) noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequestEventArgs& operator=(BarcodeScannerStartSoftwareTriggerRequestEventArgs const&) & noexcept = default;
        BarcodeScannerStartSoftwareTriggerRequestEventArgs& operator=(BarcodeScannerStartSoftwareTriggerRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerStopSoftwareTriggerRequest : Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest,
        impl::require<BarcodeScannerStopSoftwareTriggerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        BarcodeScannerStopSoftwareTriggerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerStopSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest(ptr, take_ownership_from_abi) {}
        BarcodeScannerStopSoftwareTriggerRequest(BarcodeScannerStopSoftwareTriggerRequest const&) noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequest(BarcodeScannerStopSoftwareTriggerRequest&&) noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequest& operator=(BarcodeScannerStopSoftwareTriggerRequest const&) & noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequest& operator=(BarcodeScannerStopSoftwareTriggerRequest&&) & noexcept = default;
        using Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerStopSoftwareTriggerRequest, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerStopSoftwareTriggerRequestEventArgs : Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs
    {
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(BarcodeScannerStopSoftwareTriggerRequestEventArgs const&) noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(BarcodeScannerStopSoftwareTriggerRequestEventArgs&&) noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequestEventArgs& operator=(BarcodeScannerStopSoftwareTriggerRequestEventArgs const&) & noexcept = default;
        BarcodeScannerStopSoftwareTriggerRequestEventArgs& operator=(BarcodeScannerStopSoftwareTriggerRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerVideoFrame : Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame,
        impl::require<BarcodeScannerVideoFrame, Windows::Foundation::IClosable>
    {
        BarcodeScannerVideoFrame(std::nullptr_t) noexcept {}
        BarcodeScannerVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame(ptr, take_ownership_from_abi) {}
        BarcodeScannerVideoFrame(BarcodeScannerVideoFrame const&) noexcept = default;
        BarcodeScannerVideoFrame(BarcodeScannerVideoFrame&&) noexcept = default;
        BarcodeScannerVideoFrame& operator=(BarcodeScannerVideoFrame const&) & noexcept = default;
        BarcodeScannerVideoFrame& operator=(BarcodeScannerVideoFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeSymbologyAttributesBuilder : Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder
    {
        BarcodeSymbologyAttributesBuilder(std::nullptr_t) noexcept {}
        BarcodeSymbologyAttributesBuilder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder(ptr, take_ownership_from_abi) {}
        BarcodeSymbologyAttributesBuilder();
        BarcodeSymbologyAttributesBuilder(BarcodeSymbologyAttributesBuilder const&) noexcept = default;
        BarcodeSymbologyAttributesBuilder(BarcodeSymbologyAttributesBuilder&&) noexcept = default;
        BarcodeSymbologyAttributesBuilder& operator=(BarcodeSymbologyAttributesBuilder const&) & noexcept = default;
        BarcodeSymbologyAttributesBuilder& operator=(BarcodeSymbologyAttributesBuilder&&) & noexcept = default;
    };
}
#endif
