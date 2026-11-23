#pragma once
#include "CoreMinimal.h"
#include "ECatchUpNegotiationResult.generated.h"

UENUM(BlueprintType)
enum class ECatchUpNegotiationResult : uint8 {
    None,
    Reward,
    Artifact,
    PotentExpenite,
};

