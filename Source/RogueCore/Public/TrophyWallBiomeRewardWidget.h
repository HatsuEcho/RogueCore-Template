#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "TrophyWallBiomeRewardWidget.generated.h"

class UBiome;
class UReward;
class UTrophySheet;
class UTrophyWallBiomeRewardWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UTrophyWallBiomeRewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrophyWallBiomeRewardDelegate, UTrophyWallBiomeRewardWidget*, InReward);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBiomeRewardDelegate OnClaimRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PendingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClaimableOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrantedOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrophySheet* Sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
public:
    UTrophyWallBiomeRewardWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetBiome(UTrophySheet* InSheet, UBiome* InBiome);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RewardGranted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RewardClaimable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRewardGranted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRewardClaimable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetSheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UReward*> GetRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetBiome() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClaimReward();
    
};

