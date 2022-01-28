// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210211.2

#ifndef WINRT_Windows_System_Power_Diagnostics_2_H
#define WINRT_Windows_System_Power_Diagnostics_2_H
#include "winrt/impl/Windows.System.Power.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics
{
    struct BackgroundEnergyDiagnostics
    {
        BackgroundEnergyDiagnostics() = delete;
        [[nodiscard]] static auto DeviceSpecificConversionFactor();
        static auto ComputeTotalEnergyUsage();
        static auto ResetTotalEnergyUsage();
    };
    struct ForegroundEnergyDiagnostics
    {
        ForegroundEnergyDiagnostics() = delete;
        [[nodiscard]] static auto DeviceSpecificConversionFactor();
        static auto ComputeTotalEnergyUsage();
        static auto ResetTotalEnergyUsage();
    };
}
#endif
