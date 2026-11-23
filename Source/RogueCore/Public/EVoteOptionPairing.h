#pragma once
#include "CoreMinimal.h"
#include "EVoteOptionPairing.generated.h"

UENUM(BlueprintType)
enum class EVoteOptionPairing : uint8 {
    NegativeAndPositive,
    OneNegative,
    TwoNegatives,
};

