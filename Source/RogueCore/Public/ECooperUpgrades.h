#pragma once
#include "CoreMinimal.h"
#include "ECooperUpgrades.generated.h"

UENUM(BlueprintType)
enum class ECooperUpgrades : uint8 {
    MiningSpeedUpgrade,
    ExtraRevive,
    ActiveLightRadius,
    Missile,
    CryoGrenade,
    SACooldownReduction,
    ExtraAbillityCharge,
    ReviveArmor,
    ReviveHealth,
};

