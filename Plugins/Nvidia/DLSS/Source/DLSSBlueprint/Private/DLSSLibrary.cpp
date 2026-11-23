#include "DLSSLibrary.h"

UDLSSLibrary::UDLSSLibrary() {
}

void UDLSSLibrary::SetDLSSMode(UObject* WorldContextObject, UDLSSMode DLSSMode) {
}

UDLSSSupport UDLSSLibrary::QueryDLSSSupport() {
    return UDLSSSupport::NotSupportedByPlatformAtBuildTime;
}

UDLSSSupport UDLSSLibrary::QueryDLSSRRSupport() {
    return UDLSSSupport::NotSupportedByPlatformAtBuildTime;
}

bool UDLSSLibrary::IsRayTracingAvailable() {
    return false;
}

bool UDLSSLibrary::IsDLSSSupported() {
    return false;
}

bool UDLSSLibrary::IsDLSSRRSupported() {
    return false;
}

bool UDLSSLibrary::IsDLSSRREnabled() {
    return false;
}

bool UDLSSLibrary::IsDLSSModeSupported(UDLSSMode DLSSMode) {
    return false;
}

bool UDLSSLibrary::IsDLSSEnabled() {
    return false;
}

bool UDLSSLibrary::IsDLAAEnabled() {
    return false;
}

TArray<UDLSSMode> UDLSSLibrary::GetSupportedDLSSModes() {
    return TArray<UDLSSMode>();
}

void UDLSSLibrary::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
    MinScreenPercentage = 0.0f;
    MaxScreenPercentage = 0.0f;
}

void UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
    MinDriverVersionMajor = 0;
    MinDriverVersionMinor = 0;
}

void UDLSSLibrary::GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness) {
    bIsSupported = false;
    OptimalScreenPercentage = 0.0f;
    bIsFixedScreenPercentage = false;
    MinScreenPercentage = 0.0f;
    MaxScreenPercentage = 0.0f;
    OptimalSharpness = 0.0f;
}

UDLSSMode UDLSSLibrary::GetDLSSMode() {
    return UDLSSMode::Off;
}

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
    MinDriverVersionMajor = 0;
    MinDriverVersionMinor = 0;
}

UDLSSMode UDLSSLibrary::GetDefaultDLSSMode() {
    return UDLSSMode::Off;
}

void UDLSSLibrary::EnableDLSSRR(bool bEnabled) {
}

void UDLSSLibrary::EnableDLSS(bool bEnabled) {
}

void UDLSSLibrary::EnableDLAA(bool bEnabled) {
}


