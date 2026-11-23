#include "StreamlineLibrary.h"

UStreamlineLibrary::UStreamlineLibrary() {
}

EStreamlineFeatureSupport UStreamlineLibrary::QueryStreamlineFeatureSupport(EStreamlineFeature Feature) {
    return EStreamlineFeatureSupport::NotSupported;
}

bool UStreamlineLibrary::IsStreamlineFeatureSupported(EStreamlineFeature Feature) {
    return false;
}

FStreamlineFeatureRequirements UStreamlineLibrary::GetStreamlineFeatureInformation(EStreamlineFeature Feature) {
    return FStreamlineFeatureRequirements{};
}

void UStreamlineLibrary::BreakStreamlineFeatureRequirements(EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired) {
    D3D11Supported = false;
    D3D12Supported = false;
    VulkanSupported = false;
    VSyncOffRequired = false;
    HardwareSchedulingRequired = false;
}


