#pragma once
#include "CoreMinimal.h"
#include "EGatlingGunUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="GatlingGunUpgradeType"))
enum class EGatlingGunUpgrade : uint8 {
    DamageMultiplierAtMaxStabilization,
    HeatRemovedOnKill,
    CriticalOverheat,
    BarrelProximityDamage,
};

