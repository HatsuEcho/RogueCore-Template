#pragma once
#include "CoreMinimal.h"
#include "TrophyWallBossDisplay.generated.h"

USTRUCT(BlueprintType)
struct FTrophyWallBossDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClaimLayerIndex;
    
    ROGUECORE_API FTrophyWallBossDisplay();
};

