#pragma once
#include "CoreMinimal.h"
#include "ERunMode.generated.h"

UENUM(BlueprintType)
enum class ERunMode : uint8 {
    None,
    Default,
    Cautious,
    Reckless,
};

