#pragma once
#include "CoreMinimal.h"
#include "ECooperDroneAIState.generated.h"

UENUM(BlueprintType)
enum class ECooperDroneAIState : uint8 {
    Follow,
    Mine,
    Fight,
    Revive,
    Light,
    GoToPlayer,
    Salute,
    CarryGem,
    UseAbillity,
    Repairing,
    Cleaning,
};

