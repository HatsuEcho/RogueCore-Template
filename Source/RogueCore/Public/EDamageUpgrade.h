#pragma once
#include "CoreMinimal.h"
#include "EDamageUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="DamageUpgradeType"))
enum class EDamageUpgrade : uint8 {
    Damage,
    WeakpointDamageMultiplier,
    StunChance,
    StunDuration,
    RadialRange,
    ArmorDamageMultiplier,
    FearFactor,
    RadialRangeMultiplier,
    StunOnWeakPointOnly,
    FriendlyFireModifier,
    ShattersArmor,
    ArmorPenetration,
    DamageMultiplier,
    BaseDamageMultiplier,
    Num,
};

