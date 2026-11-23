#pragma once
#include "CoreMinimal.h"
#include "EPlayerAimCameraOption.generated.h"

UENUM(BlueprintType)
enum class EPlayerAimCameraOption : uint8 {
    FirstPersonAim,
    ThirdPersonCloseAim,
    ThirdPersonFarAim,
};

