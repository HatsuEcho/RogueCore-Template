#pragma once
#include "CoreMinimal.h"
#include "EBeltDrivenWeaponUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="BeltDrivenWeaponUpgradeType"))
enum class EBeltDrivenWeaponUpgrade : uint8 {
    BarrelSpinupTime,
    BarrelSpinDownTime,
};

