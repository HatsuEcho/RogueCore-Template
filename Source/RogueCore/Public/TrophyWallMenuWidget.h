#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WindowWidget.h"
#include "TrophyWallMenuWidget.generated.h"

class UBiome;
class UEnemyID;
class UObject;
class USoundBase;
class UTrophySheet;
class UTrophyWallBiomeCardWidget;
class UTrophyWallBossTrophyWidget;
class UTrophyWallCountRewardWidget;
class UTrophyWallMenuWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UTrophyWallMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_ClaimTrophy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_RewardGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTrophyWallBiomeCardWidget*> BiomeCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTrophyWallCountRewardWidget* CountReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrophySheet* TrophySheet;
    
public:
    UTrophyWallMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetTrophySheet(UTrophySheet* InSheet);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TrophyClaimed(UBiome* InBiome, UEnemyID* InBoss, bool bInRewardsClaimable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RewardClaimed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Refreshed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RebuildBiomeCards(const TArray<UBiome*>& InBiomes);
    
public:
    UFUNCTION(BlueprintCallable)
    void Rebuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTrophyWallMenuWidget* OpenTrophyWall(UObject* WorldContextObject, TSubclassOf<UTrophyWallMenuWidget> MenuClass, UTrophySheet* InSheet, int32 InZOrder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTrophyWallChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleTrophyClaimRequested(UTrophyWallBiomeCardWidget* InCard, UTrophyWallBossTrophyWidget* InTrophy);
    
    UFUNCTION(BlueprintCallable)
    void HandleMilestoneRewardClaimRequested(UTrophyWallCountRewardWidget* InReward);
    
    UFUNCTION(BlueprintCallable)
    void HandleBiomeRewardClaimRequested(UTrophyWallBiomeCardWidget* InCard);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetTrophySheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSheetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimableTrophyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimableRewardCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCardRow(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCardColumn(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrophyWallBiomeCardWidget*> GetBiomeCards() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClaimTrophy(UBiome* InBiome, UEnemyID* InBoss);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimMilestoneReward(int32 InClaimedTrophyCount);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimBiomeReward(UBiome* InBiome);
    
    UFUNCTION(BlueprintCallable)
    int32 ClaimAllTrophies();
    
    UFUNCTION(BlueprintCallable)
    int32 ClaimAllRewards();
    
};

