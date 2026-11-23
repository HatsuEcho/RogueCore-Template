#pragma once
#include "CoreMinimal.h"
#include "ETunnelPointSelection.generated.h"

UENUM(BlueprintType)
enum class ETunnelPointSelection : uint8 {
    First,
    Middle,
    Last,
};

