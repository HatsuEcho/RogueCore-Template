#pragma once
#include "CoreMinimal.h"
#include "ECooperAbillityTargetPreference.generated.h"

UENUM(BlueprintType)
enum class ECooperAbillityTargetPreference : uint8 {
    Self,
    SelectedTarget,
    ClosestPlayer,
    ClosestEnemy,
    TargetLocation,
};

