#pragma once
#include "CoreMinimal.h"
#include "EDynamicBindingMissionEndAnimationType.generated.h"

UENUM(BlueprintType)
enum class EDynamicBindingMissionEndAnimationType : uint8 {
    Success,
    SuccessButDead,
    Failure,
};

