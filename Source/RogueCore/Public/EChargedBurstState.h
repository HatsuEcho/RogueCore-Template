#pragma once
#include "CoreMinimal.h"
#include "EChargedBurstState.generated.h"

UENUM(BlueprintType)
enum class EChargedBurstState : uint8 {
    Idle,
    Holding,
    Charging,
    Bursting,
};

