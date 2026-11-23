#pragma once
#include "CoreMinimal.h"
#include "EGrabbingTentacleState.generated.h"

UENUM(BlueprintType)
enum class EGrabbingTentacleState : uint8 {
    Hidden,
    Warning,
    Holding,
    Releasing,
    Missing,
};

