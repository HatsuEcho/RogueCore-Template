#pragma once
#include "CoreMinimal.h"
#include "ECampaignMutators.generated.h"

UENUM(BlueprintType)
enum class ECampaignMutators : uint8 {
    Default,
    AllowNone,
    AllowAny,
};

