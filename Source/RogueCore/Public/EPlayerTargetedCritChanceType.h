#pragma once
#include "CoreMinimal.h"
#include "EPlayerTargetedCritChanceType.generated.h"

UENUM(BlueprintType)
enum class EPlayerTargetedCritChanceType : uint8 {
    IsPlayerTargeted,
    IsPlayerNotTargeted,
};

