#pragma once
#include "CoreMinimal.h"
#include "EBossFightStage.generated.h"

UENUM(BlueprintType)
enum class EBossFightStage : uint8 {
    Inactive,
    Vulnerable,
    AwaitingObjective,
    Recovering,
    Defeated,
};

