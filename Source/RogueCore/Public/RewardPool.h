#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EntitlementRewardPool -FallbackName=EntitlementRewardPool
#include "EntitlementRewardPool.h"
#include "SavableDataAsset.h"
#include "RewardPool.generated.h"

class UObject;
class UReward;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URewardPool : public USavableDataAsset, public IEntitlementRewardPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;

    URewardPool();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool RevokeRewards(UObject* WorldContextObject) override PURE_VIRTUAL(RevokeRewards, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasBeenRewarded(UObject* WorldContextObject) override PURE_VIRTUAL(HasBeenRewarded, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GiveRewards(UObject* WorldContextObject, UObject* RewardTarget) override PURE_VIRTUAL(GiveRewards, return false;);
    
};

