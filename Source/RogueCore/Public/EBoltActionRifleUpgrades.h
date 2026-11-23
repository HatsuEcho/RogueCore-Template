#pragma once
#include "CoreMinimal.h"
#include "EBoltActionRifleUpgrades.generated.h"

UENUM(BlueprintType)
enum class EBoltActionRifleUpgrades : uint8 {
    FocusSpeed,
    AimedShotStun,
    AimedWeakShotKillFearFactor,
    FocusDamageBonus,
    UnZoomedAccuracySpread,
    FocusedWeakspotHitStatusEffect,
    NoGravityOnFocus,
    KillReloadTimeBoost,
    AimedShotWeakpointDamageBonusMultiplier,
    AimedShotAmmoCost,
    AimBot,
};

