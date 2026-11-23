#pragma once
#include "CoreMinimal.h"
#include "TrophyMilestoneReward.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FTrophyMilestoneReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClaimedTrophyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
    ROGUECORE_API FTrophyMilestoneReward();
};

