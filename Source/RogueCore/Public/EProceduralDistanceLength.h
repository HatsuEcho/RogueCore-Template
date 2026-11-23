#pragma once
#include "CoreMinimal.h"
#include "EProceduralDistanceLength.generated.h"

UENUM(BlueprintType)
enum class EProceduralDistanceLength : uint8 {
    NoDistance,
    Short,
    Medium,
    Long,
    Far,
};

