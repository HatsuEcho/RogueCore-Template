#pragma once
#include "CoreMinimal.h"
#include "EDeploymentStatFormat.generated.h"

UENUM(BlueprintType)
enum class EDeploymentStatFormat : uint8 {
    TwoStats,
    SingleStatTwoClasses,
};

