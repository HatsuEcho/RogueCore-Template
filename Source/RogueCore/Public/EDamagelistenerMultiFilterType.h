#pragma once
#include "CoreMinimal.h"
#include "EDamagelistenerMultiFilterType.generated.h"

UENUM(BlueprintType)
enum class EDamagelistenerMultiFilterType : uint8 {
    AllPasses,
    AnyPasses,
};

