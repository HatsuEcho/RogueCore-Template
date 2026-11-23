#pragma once
#include "CoreMinimal.h"
#include "ECarverBSPBuilder.generated.h"

UENUM(BlueprintType)
enum class ECarverBSPBuilder : uint8 {
    LegacyCrust,
    ConvexDecomposition,
    WindingBSP,
};

