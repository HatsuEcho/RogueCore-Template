#pragma once
#include "CoreMinimal.h"
#include "EAutomaitcSoundOverride.generated.h"

UENUM(BlueprintType)
enum class EAutomaitcSoundOverride : uint8 {
    DontOverride,
    Automatic,
    SingleFire,
};

