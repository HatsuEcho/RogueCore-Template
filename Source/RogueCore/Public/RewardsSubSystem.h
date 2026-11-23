#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EDisconnectReason -FallbackName=EDisconnectReason
#include "EDisconnectReason.h"
#include "ClaimableRewardEntry.h"
#include "CurrencyRewardsForUI.h"
#include "RunRewardData.h"
#include "RewardsSubSystem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URewardsSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunRewardData PendingMissionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> PendingAscensionRewards;
    
    URewardsSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPendingRewardsBeGivenInstantly(EDisconnectReason DisconnectReason) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetPendingRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingRewards() const;
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_SetPendingRewards(FRunRewardData Data);
    
    UFUNCTION(BlueprintCallable)
    FCurrencyRewardsForUI ApplyPendingRewards();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCurrencyRewardsForUI ClaimedRewards;

    UFUNCTION(BlueprintCallable)
    bool TakeClaimedRewards(FCurrencyRewardsForUI& OutRewards);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClaimedRewards() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyRewardsForUI GetPendingRewardsPreview() const;

    UFUNCTION(BlueprintCallable)
    FCurrencyRewardsForUI ClaimRunRewards(bool bShowOnSpaceRig);

};

