#pragma once
#include "CoreMinimal.h"
#include "EGooType.generated.h"

UENUM(BlueprintType)
enum class EGooType : uint8 {
    Sticky,
    Slippery,
    Bouncy,
};

