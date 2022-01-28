// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Devices_Gpio_2_H
#define WINRT_Windows_Devices_Gpio_2_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Gpio.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio
{
    struct GpioChangeCount
    {
        uint64_t Count;
        Windows::Foundation::TimeSpan RelativeTime;
    };
    inline bool operator==(GpioChangeCount const& left, GpioChangeCount const& right) noexcept
    {
        return left.Count == right.Count && left.RelativeTime == right.RelativeTime;
    }
    inline bool operator!=(GpioChangeCount const& left, GpioChangeCount const& right) noexcept
    {
        return !(left == right);
    }
    struct GpioChangeRecord
    {
        Windows::Foundation::TimeSpan RelativeTime;
        Windows::Devices::Gpio::GpioPinEdge Edge;
    };
    inline bool operator==(GpioChangeRecord const& left, GpioChangeRecord const& right) noexcept
    {
        return left.RelativeTime == right.RelativeTime && left.Edge == right.Edge;
    }
    inline bool operator!=(GpioChangeRecord const& left, GpioChangeRecord const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) GpioChangeCounter : Windows::Devices::Gpio::IGpioChangeCounter
    {
        GpioChangeCounter(std::nullptr_t) noexcept {}
        GpioChangeCounter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::IGpioChangeCounter(ptr, take_ownership_from_abi) {}
        explicit GpioChangeCounter(Windows::Devices::Gpio::GpioPin const& pin);
        GpioChangeCounter(GpioChangeCounter const&) noexcept = default;
        GpioChangeCounter(GpioChangeCounter&&) noexcept = default;
        GpioChangeCounter& operator=(GpioChangeCounter const&) & noexcept = default;
        GpioChangeCounter& operator=(GpioChangeCounter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GpioChangeReader : Windows::Devices::Gpio::IGpioChangeReader
    {
        GpioChangeReader(std::nullptr_t) noexcept {}
        GpioChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::IGpioChangeReader(ptr, take_ownership_from_abi) {}
        explicit GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin);
        GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity);
        GpioChangeReader(GpioChangeReader const&) noexcept = default;
        GpioChangeReader(GpioChangeReader&&) noexcept = default;
        GpioChangeReader& operator=(GpioChangeReader const&) & noexcept = default;
        GpioChangeReader& operator=(GpioChangeReader&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GpioController : Windows::Devices::Gpio::IGpioController
    {
        GpioController(std::nullptr_t) noexcept {}
        GpioController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::IGpioController(ptr, take_ownership_from_abi) {}
        GpioController(GpioController const&) noexcept = default;
        GpioController(GpioController&&) noexcept = default;
        GpioController& operator=(GpioController const&) & noexcept = default;
        GpioController& operator=(GpioController&&) & noexcept = default;
        static auto GetDefault();
        static auto GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider);
        static auto GetDefaultAsync();
    };
    struct __declspec(empty_bases) GpioPin : Windows::Devices::Gpio::IGpioPin
    {
        GpioPin(std::nullptr_t) noexcept {}
        GpioPin(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::IGpioPin(ptr, take_ownership_from_abi) {}
        GpioPin(GpioPin const&) noexcept = default;
        GpioPin(GpioPin&&) noexcept = default;
        GpioPin& operator=(GpioPin const&) & noexcept = default;
        GpioPin& operator=(GpioPin&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GpioPinValueChangedEventArgs : Windows::Devices::Gpio::IGpioPinValueChangedEventArgs
    {
        GpioPinValueChangedEventArgs(std::nullptr_t) noexcept {}
        GpioPinValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Gpio::IGpioPinValueChangedEventArgs(ptr, take_ownership_from_abi) {}
        GpioPinValueChangedEventArgs(GpioPinValueChangedEventArgs const&) noexcept = default;
        GpioPinValueChangedEventArgs(GpioPinValueChangedEventArgs&&) noexcept = default;
        GpioPinValueChangedEventArgs& operator=(GpioPinValueChangedEventArgs const&) & noexcept = default;
        GpioPinValueChangedEventArgs& operator=(GpioPinValueChangedEventArgs&&) & noexcept = default;
    };
}
#endif