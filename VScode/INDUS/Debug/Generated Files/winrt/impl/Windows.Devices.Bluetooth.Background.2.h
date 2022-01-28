// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Devices_Bluetooth_Background_2_H
#define WINRT_Windows_Devices_Bluetooth_Background_2_H
#include "winrt/impl/Windows.Devices.Bluetooth.Background.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background
{
    struct __declspec(empty_bases) BluetoothLEAdvertisementPublisherTriggerDetails : Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails
    {
        BluetoothLEAdvertisementPublisherTriggerDetails(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementPublisherTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementPublisherTriggerDetails(BluetoothLEAdvertisementPublisherTriggerDetails const&) noexcept = default;
        BluetoothLEAdvertisementPublisherTriggerDetails(BluetoothLEAdvertisementPublisherTriggerDetails&&) noexcept = default;
        BluetoothLEAdvertisementPublisherTriggerDetails& operator=(BluetoothLEAdvertisementPublisherTriggerDetails const&) & noexcept = default;
        BluetoothLEAdvertisementPublisherTriggerDetails& operator=(BluetoothLEAdvertisementPublisherTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementWatcherTriggerDetails : Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails
    {
        BluetoothLEAdvertisementWatcherTriggerDetails(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementWatcherTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementWatcherTriggerDetails(BluetoothLEAdvertisementWatcherTriggerDetails const&) noexcept = default;
        BluetoothLEAdvertisementWatcherTriggerDetails(BluetoothLEAdvertisementWatcherTriggerDetails&&) noexcept = default;
        BluetoothLEAdvertisementWatcherTriggerDetails& operator=(BluetoothLEAdvertisementWatcherTriggerDetails const&) & noexcept = default;
        BluetoothLEAdvertisementWatcherTriggerDetails& operator=(BluetoothLEAdvertisementWatcherTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GattCharacteristicNotificationTriggerDetails : Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails,
        impl::require<GattCharacteristicNotificationTriggerDetails, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
    {
        GattCharacteristicNotificationTriggerDetails(std::nullptr_t) noexcept {}
        GattCharacteristicNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
        GattCharacteristicNotificationTriggerDetails(GattCharacteristicNotificationTriggerDetails const&) noexcept = default;
        GattCharacteristicNotificationTriggerDetails(GattCharacteristicNotificationTriggerDetails&&) noexcept = default;
        GattCharacteristicNotificationTriggerDetails& operator=(GattCharacteristicNotificationTriggerDetails const&) & noexcept = default;
        GattCharacteristicNotificationTriggerDetails& operator=(GattCharacteristicNotificationTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GattServiceProviderConnection : Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection
    {
        GattServiceProviderConnection(std::nullptr_t) noexcept {}
        GattServiceProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection(ptr, take_ownership_from_abi) {}
        GattServiceProviderConnection(GattServiceProviderConnection const&) noexcept = default;
        GattServiceProviderConnection(GattServiceProviderConnection&&) noexcept = default;
        GattServiceProviderConnection& operator=(GattServiceProviderConnection const&) & noexcept = default;
        GattServiceProviderConnection& operator=(GattServiceProviderConnection&&) & noexcept = default;
        [[nodiscard]] static auto AllServices();
    };
    struct __declspec(empty_bases) GattServiceProviderTriggerDetails : Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails
    {
        GattServiceProviderTriggerDetails(std::nullptr_t) noexcept {}
        GattServiceProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails(ptr, take_ownership_from_abi) {}
        GattServiceProviderTriggerDetails(GattServiceProviderTriggerDetails const&) noexcept = default;
        GattServiceProviderTriggerDetails(GattServiceProviderTriggerDetails&&) noexcept = default;
        GattServiceProviderTriggerDetails& operator=(GattServiceProviderTriggerDetails const&) & noexcept = default;
        GattServiceProviderTriggerDetails& operator=(GattServiceProviderTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RfcommConnectionTriggerDetails : Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails
    {
        RfcommConnectionTriggerDetails(std::nullptr_t) noexcept {}
        RfcommConnectionTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails(ptr, take_ownership_from_abi) {}
        RfcommConnectionTriggerDetails(RfcommConnectionTriggerDetails const&) noexcept = default;
        RfcommConnectionTriggerDetails(RfcommConnectionTriggerDetails&&) noexcept = default;
        RfcommConnectionTriggerDetails& operator=(RfcommConnectionTriggerDetails const&) & noexcept = default;
        RfcommConnectionTriggerDetails& operator=(RfcommConnectionTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RfcommInboundConnectionInformation : Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation
    {
        RfcommInboundConnectionInformation(std::nullptr_t) noexcept {}
        RfcommInboundConnectionInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation(ptr, take_ownership_from_abi) {}
        RfcommInboundConnectionInformation(RfcommInboundConnectionInformation const&) noexcept = default;
        RfcommInboundConnectionInformation(RfcommInboundConnectionInformation&&) noexcept = default;
        RfcommInboundConnectionInformation& operator=(RfcommInboundConnectionInformation const&) & noexcept = default;
        RfcommInboundConnectionInformation& operator=(RfcommInboundConnectionInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RfcommOutboundConnectionInformation : Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation
    {
        RfcommOutboundConnectionInformation(std::nullptr_t) noexcept {}
        RfcommOutboundConnectionInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation(ptr, take_ownership_from_abi) {}
        RfcommOutboundConnectionInformation(RfcommOutboundConnectionInformation const&) noexcept = default;
        RfcommOutboundConnectionInformation(RfcommOutboundConnectionInformation&&) noexcept = default;
        RfcommOutboundConnectionInformation& operator=(RfcommOutboundConnectionInformation const&) & noexcept = default;
        RfcommOutboundConnectionInformation& operator=(RfcommOutboundConnectionInformation&&) & noexcept = default;
    };
}
#endif
