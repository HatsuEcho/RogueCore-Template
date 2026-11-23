#pragma once
#include "CoreMinimal.h"
#include "EAssaultRifleUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="AssaultRifleUpgradeType"))
enum class EAssaultRifleUpgrade : uint8 {
    KillResetsSpread,
    KillTriggerStatusEffect,
};

