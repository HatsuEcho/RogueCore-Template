#pragma once
#include "CoreMinimal.h"
#include "ETrophyWallTrophyState.generated.h"

UENUM(BlueprintType)
enum class ETrophyWallTrophyState : uint8 {
    NotKilled,
    Claimable,
    Claimed,
};

