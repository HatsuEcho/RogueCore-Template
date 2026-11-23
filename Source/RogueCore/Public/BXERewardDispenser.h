#pragma once
#include "CoreMinimal.h"
#include "GenericRewardDispenser.h"
#include "RewardDispenserReward.h"
#include "BXERewardDispenser.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ABXERewardDispenser : public AGenericRewardDispenser {
    GENERATED_BODY()
public:
    ABXERewardDispenser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectedReward(FRewardDispenserReward InReward);
    
};

