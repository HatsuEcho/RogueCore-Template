#pragma once
#include "CoreMinimal.h"
#include "EGymGameMode.generated.h"

UENUM(BlueprintType)
enum class EGymGameMode : uint8 {
    Meter,
    Run,
    Button,
    ButtonSequence,
    None,
};

