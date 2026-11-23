#pragma once
#include "CoreMinimal.h"
#include "ECharacterCameraMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterCameraMode : uint8 {
    FirstPersonAim,
    ThirdPersonSpectate,
    ThirdPersonFollow,
    ThirdPersonDowned,
    TerrainScanner,
    PhotographyMode,
    FirstPersonHeadOnly,
    Gym,
    ThirdPersonCloseAim,
    ThirdPersonFarAim,
};

