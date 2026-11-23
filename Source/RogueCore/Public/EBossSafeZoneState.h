#pragma once
#include "CoreMinimal.h"
#include "EBossSafeZoneState.generated.h"

UENUM(BlueprintType)
enum class EBossSafeZoneState : uint8 {
    Grace,
    Active,
};

