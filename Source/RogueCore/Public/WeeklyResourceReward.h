#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "Reward.h"
#include "WeeklyResourceReward.generated.h"

class AFSDPlayerController;
class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWeeklyResourceReward : public UReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Amount;

    UWeeklyResourceReward();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetRewards(AFSDPlayerController* Player) const;
    
};

