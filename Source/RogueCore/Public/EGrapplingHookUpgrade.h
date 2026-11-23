#pragma once
#include "CoreMinimal.h"
#include "EGrapplingHookUpgrade.generated.h"

UENUM(BlueprintType, meta=(ScriptName="GrapplingHookUpgradeType"))
enum class EGrapplingHookUpgrade : uint8 {
    MaxDistance,
    MaxSpeed,
    WindUpTime,
};

