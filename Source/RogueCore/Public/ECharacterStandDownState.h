#pragma once
#include "CoreMinimal.h"
#include "ECharacterStandDownState.generated.h"

UENUM(BlueprintType)
enum class ECharacterStandDownState : uint8 {
    None,
    Partial,
    Full,
};

