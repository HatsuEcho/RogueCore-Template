#pragma once
#include "CoreMinimal.h"
#include "EAlterationWheelImageMapping.generated.h"

UENUM(BlueprintType)
enum class EAlterationWheelImageMapping : uint8 {
    PerSegment,
    WholeWheel,
};

