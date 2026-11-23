#pragma once
#include "CoreMinimal.h"
#include "EMontageRotationDirection.generated.h"

UENUM(BlueprintType)
enum class EMontageRotationDirection : uint8 {
    None,
    Left,
    Right,
};

