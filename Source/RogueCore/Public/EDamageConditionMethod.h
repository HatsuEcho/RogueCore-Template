#pragma once
#include "CoreMinimal.h"
#include "EDamageConditionMethod.generated.h"

UENUM(BlueprintType)
enum class EDamageConditionMethod : uint8 {
    Direct,
    Radial,
};

