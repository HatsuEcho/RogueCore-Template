#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "TrophyWallCountRewardWidget.generated.h"

class UReward;
class UTrophySheet;
class UTrophyWallCountRewardWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UTrophyWallCountRewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrophyWallCountRewardDelegate, UTrophyWallCountRewardWidget*, InReward);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallCountRewardDelegate OnClaimRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProgressFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NextRewardLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClaimRewardLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrophySheet* Sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReward*> NextRewards;
    
public:
    UTrophyWallCountRewardWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetSheet(UTrophySheet* InSheet);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RewardClaimable(int32 InClaimedTrophyCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_MilestoneReached(int32 InClaimedTrophyCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextRewardClaimable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNextReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetSheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetProgressText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextRewardThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UReward*> GetNextRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNextRewardLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimedCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClaimReward();
    
};

