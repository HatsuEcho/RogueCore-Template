#pragma once
#include "CoreMinimal.h"
#include "EDamageTagConditionType.generated.h"

UENUM(BlueprintType)
enum class EDamageTagConditionType : uint8 {
    HasAll,
    HasAny,
    HasNone,
};

