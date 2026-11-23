#pragma once
#include "CoreMinimal.h"
#include "EBasicPistol.generated.h"

UENUM(BlueprintType, meta=(ScriptName="BasicPistolType"))
enum class EBasicPistol : uint8 {
    ConsecutiveHitsDamageBonus,
};

