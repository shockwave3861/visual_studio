// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_Gaming_Input_1_H
#define WINRT_Windows_Gaming_Input_1_H
#include "winrt/impl/Windows.Gaming.Input.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    struct __declspec(empty_bases) IArcadeStick :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStick>,
        impl::require<Windows::Gaming::Input::IArcadeStick, Windows::Gaming::Input::IGameController>
    {
        IArcadeStick(std::nullptr_t = nullptr) noexcept {}
        IArcadeStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IArcadeStick(IArcadeStick const&) noexcept = default;
        IArcadeStick(IArcadeStick&&) noexcept = default;
        IArcadeStick& operator=(IArcadeStick const&) & noexcept = default;
        IArcadeStick& operator=(IArcadeStick&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IArcadeStickStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStickStatics>
    {
        IArcadeStickStatics(std::nullptr_t = nullptr) noexcept {}
        IArcadeStickStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IArcadeStickStatics(IArcadeStickStatics const&) noexcept = default;
        IArcadeStickStatics(IArcadeStickStatics&&) noexcept = default;
        IArcadeStickStatics& operator=(IArcadeStickStatics const&) & noexcept = default;
        IArcadeStickStatics& operator=(IArcadeStickStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IArcadeStickStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStickStatics2>,
        impl::require<Windows::Gaming::Input::IArcadeStickStatics2, Windows::Gaming::Input::IArcadeStickStatics>
    {
        IArcadeStickStatics2(std::nullptr_t = nullptr) noexcept {}
        IArcadeStickStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IArcadeStickStatics2(IArcadeStickStatics2 const&) noexcept = default;
        IArcadeStickStatics2(IArcadeStickStatics2&&) noexcept = default;
        IArcadeStickStatics2& operator=(IArcadeStickStatics2 const&) & noexcept = default;
        IArcadeStickStatics2& operator=(IArcadeStickStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IFlightStick :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFlightStick>,
        impl::require<Windows::Gaming::Input::IFlightStick, Windows::Gaming::Input::IGameController>
    {
        IFlightStick(std::nullptr_t = nullptr) noexcept {}
        IFlightStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IFlightStick(IFlightStick const&) noexcept = default;
        IFlightStick(IFlightStick&&) noexcept = default;
        IFlightStick& operator=(IFlightStick const&) & noexcept = default;
        IFlightStick& operator=(IFlightStick&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IFlightStickStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFlightStickStatics>
    {
        IFlightStickStatics(std::nullptr_t = nullptr) noexcept {}
        IFlightStickStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IFlightStickStatics(IFlightStickStatics const&) noexcept = default;
        IFlightStickStatics(IFlightStickStatics&&) noexcept = default;
        IFlightStickStatics& operator=(IFlightStickStatics const&) & noexcept = default;
        IFlightStickStatics& operator=(IFlightStickStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGameController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameController>
    {
        IGameController(std::nullptr_t = nullptr) noexcept {}
        IGameController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGameController(IGameController const&) noexcept = default;
        IGameController(IGameController&&) noexcept = default;
        IGameController& operator=(IGameController const&) & noexcept = default;
        IGameController& operator=(IGameController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGameControllerBatteryInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerBatteryInfo>
    {
        IGameControllerBatteryInfo(std::nullptr_t = nullptr) noexcept {}
        IGameControllerBatteryInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGameControllerBatteryInfo(IGameControllerBatteryInfo const&) noexcept = default;
        IGameControllerBatteryInfo(IGameControllerBatteryInfo&&) noexcept = default;
        IGameControllerBatteryInfo& operator=(IGameControllerBatteryInfo const&) & noexcept = default;
        IGameControllerBatteryInfo& operator=(IGameControllerBatteryInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGamepad :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepad>,
        impl::require<Windows::Gaming::Input::IGamepad, Windows::Gaming::Input::IGameController>
    {
        IGamepad(std::nullptr_t = nullptr) noexcept {}
        IGamepad(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGamepad(IGamepad const&) noexcept = default;
        IGamepad(IGamepad&&) noexcept = default;
        IGamepad& operator=(IGamepad const&) & noexcept = default;
        IGamepad& operator=(IGamepad&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGamepad2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepad2>,
        impl::require<Windows::Gaming::Input::IGamepad2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IGamepad>
    {
        IGamepad2(std::nullptr_t = nullptr) noexcept {}
        IGamepad2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGamepad2(IGamepad2 const&) noexcept = default;
        IGamepad2(IGamepad2&&) noexcept = default;
        IGamepad2& operator=(IGamepad2 const&) & noexcept = default;
        IGamepad2& operator=(IGamepad2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGamepadStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepadStatics>
    {
        IGamepadStatics(std::nullptr_t = nullptr) noexcept {}
        IGamepadStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGamepadStatics(IGamepadStatics const&) noexcept = default;
        IGamepadStatics(IGamepadStatics&&) noexcept = default;
        IGamepadStatics& operator=(IGamepadStatics const&) & noexcept = default;
        IGamepadStatics& operator=(IGamepadStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGamepadStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepadStatics2>,
        impl::require<Windows::Gaming::Input::IGamepadStatics2, Windows::Gaming::Input::IGamepadStatics>
    {
        IGamepadStatics2(std::nullptr_t = nullptr) noexcept {}
        IGamepadStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGamepadStatics2(IGamepadStatics2 const&) noexcept = default;
        IGamepadStatics2(IGamepadStatics2&&) noexcept = default;
        IGamepadStatics2& operator=(IGamepadStatics2 const&) & noexcept = default;
        IGamepadStatics2& operator=(IGamepadStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHeadset :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHeadset>
    {
        IHeadset(std::nullptr_t = nullptr) noexcept {}
        IHeadset(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHeadset(IHeadset const&) noexcept = default;
        IHeadset(IHeadset&&) noexcept = default;
        IHeadset& operator=(IHeadset const&) & noexcept = default;
        IHeadset& operator=(IHeadset&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRacingWheel :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheel>,
        impl::require<Windows::Gaming::Input::IRacingWheel, Windows::Gaming::Input::IGameController>
    {
        IRacingWheel(std::nullptr_t = nullptr) noexcept {}
        IRacingWheel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRacingWheel(IRacingWheel const&) noexcept = default;
        IRacingWheel(IRacingWheel&&) noexcept = default;
        IRacingWheel& operator=(IRacingWheel const&) & noexcept = default;
        IRacingWheel& operator=(IRacingWheel&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRacingWheelStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheelStatics>
    {
        IRacingWheelStatics(std::nullptr_t = nullptr) noexcept {}
        IRacingWheelStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRacingWheelStatics(IRacingWheelStatics const&) noexcept = default;
        IRacingWheelStatics(IRacingWheelStatics&&) noexcept = default;
        IRacingWheelStatics& operator=(IRacingWheelStatics const&) & noexcept = default;
        IRacingWheelStatics& operator=(IRacingWheelStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRacingWheelStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheelStatics2>,
        impl::require<Windows::Gaming::Input::IRacingWheelStatics2, Windows::Gaming::Input::IRacingWheelStatics>
    {
        IRacingWheelStatics2(std::nullptr_t = nullptr) noexcept {}
        IRacingWheelStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRacingWheelStatics2(IRacingWheelStatics2 const&) noexcept = default;
        IRacingWheelStatics2(IRacingWheelStatics2&&) noexcept = default;
        IRacingWheelStatics2& operator=(IRacingWheelStatics2 const&) & noexcept = default;
        IRacingWheelStatics2& operator=(IRacingWheelStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRawGameController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameController>,
        impl::require<Windows::Gaming::Input::IRawGameController, Windows::Gaming::Input::IGameController>
    {
        IRawGameController(std::nullptr_t = nullptr) noexcept {}
        IRawGameController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRawGameController(IRawGameController const&) noexcept = default;
        IRawGameController(IRawGameController&&) noexcept = default;
        IRawGameController& operator=(IRawGameController const&) & noexcept = default;
        IRawGameController& operator=(IRawGameController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRawGameController2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameController2>,
        impl::require<Windows::Gaming::Input::IRawGameController2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IRawGameController>
    {
        IRawGameController2(std::nullptr_t = nullptr) noexcept {}
        IRawGameController2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRawGameController2(IRawGameController2 const&) noexcept = default;
        IRawGameController2(IRawGameController2&&) noexcept = default;
        IRawGameController2& operator=(IRawGameController2 const&) & noexcept = default;
        IRawGameController2& operator=(IRawGameController2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRawGameControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameControllerStatics>
    {
        IRawGameControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IRawGameControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRawGameControllerStatics(IRawGameControllerStatics const&) noexcept = default;
        IRawGameControllerStatics(IRawGameControllerStatics&&) noexcept = default;
        IRawGameControllerStatics& operator=(IRawGameControllerStatics const&) & noexcept = default;
        IRawGameControllerStatics& operator=(IRawGameControllerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IUINavigationController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationController>,
        impl::require<Windows::Gaming::Input::IUINavigationController, Windows::Gaming::Input::IGameController>
    {
        IUINavigationController(std::nullptr_t = nullptr) noexcept {}
        IUINavigationController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IUINavigationController(IUINavigationController const&) noexcept = default;
        IUINavigationController(IUINavigationController&&) noexcept = default;
        IUINavigationController& operator=(IUINavigationController const&) & noexcept = default;
        IUINavigationController& operator=(IUINavigationController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IUINavigationControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationControllerStatics>
    {
        IUINavigationControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IUINavigationControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IUINavigationControllerStatics(IUINavigationControllerStatics const&) noexcept = default;
        IUINavigationControllerStatics(IUINavigationControllerStatics&&) noexcept = default;
        IUINavigationControllerStatics& operator=(IUINavigationControllerStatics const&) & noexcept = default;
        IUINavigationControllerStatics& operator=(IUINavigationControllerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IUINavigationControllerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationControllerStatics2>,
        impl::require<Windows::Gaming::Input::IUINavigationControllerStatics2, Windows::Gaming::Input::IUINavigationControllerStatics>
    {
        IUINavigationControllerStatics2(std::nullptr_t = nullptr) noexcept {}
        IUINavigationControllerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IUINavigationControllerStatics2(IUINavigationControllerStatics2 const&) noexcept = default;
        IUINavigationControllerStatics2(IUINavigationControllerStatics2&&) noexcept = default;
        IUINavigationControllerStatics2& operator=(IUINavigationControllerStatics2 const&) & noexcept = default;
        IUINavigationControllerStatics2& operator=(IUINavigationControllerStatics2&&) & noexcept = default;
    };
}
#endif
