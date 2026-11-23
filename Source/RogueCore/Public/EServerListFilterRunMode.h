#pragma once
#include "CoreMinimal.h"
#include "EServerListFilterRunMode.generated.h"

UENUM(BlueprintType)
enum class EServerListFilterRunMode : uint8 {
    Any,
    Standard,
    Cautious,
    Reckless,
};

