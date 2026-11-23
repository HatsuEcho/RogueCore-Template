#pragma once
#include "CoreMinimal.h"
#include "ELogicUnlockStackType.generated.h"

UENUM(BlueprintType)
enum class ELogicUnlockStackType : uint8 {
    None,
    Add,
    Multiply,
};

