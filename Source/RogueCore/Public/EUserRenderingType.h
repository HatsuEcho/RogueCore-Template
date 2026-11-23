#pragma once
#include "CoreMinimal.h"
#include "EUserRenderingType.generated.h"

UENUM(BlueprintType)
enum class EUserRenderingType : uint8 {
    Pure,
    FXAA,
    TemporalAA,
    TSR,
    FSR3,
    DLSS,
    DLAA,
};

