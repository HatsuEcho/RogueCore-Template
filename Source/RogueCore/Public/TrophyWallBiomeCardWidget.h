#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "TrophyWallBiomeCardWidget.generated.h"

class UBiome;
class UEnemyID;
class UTexture2D;
class UTrophySheet;
class UTrophyWallBiomeCardWidget;
class UTrophyWallBiomeRewardWidget;
class UTrophyWallBossTrophyWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UTrophyWallBiomeCardWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrophyWallBiomeCardTrophyDelegate, UTrophyWallBiomeCardWidget*, InCard, UTrophyWallBossTrophyWidget*, InTrophy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrophyWallBiomeCardDelegate, UTrophyWallBiomeCardWidget*, InCard);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBiomeCardTrophyDelegate OnTrophyClaimRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBiomeCardDelegate OnRewardClaimRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrophiesPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClaimableHighlightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTrophyWallBossTrophyWidget*> BossTrophies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTrophyWallBiomeRewardWidget* BiomeReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrophySheet* Sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
public:
    UTrophyWallBiomeCardWidget();

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
    void Receive_RebuildTrophies(const TArray<UEnemyID*>& InBosses);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_BiomeChanged(UBiome* InBiome);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBiomeClaimed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTrophyClaimRequested(UTrophyWallBossTrophyWidget* InTrophy);
    
    UFUNCTION(BlueprintCallable)
    void HandleRewardClaimRequested(UTrophyWallBiomeRewardWidget* InReward);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrophyRow(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrophyColumn(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetSheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimableCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrophyWallBossTrophyWidget*> GetBossTrophies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBiomeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetBiome() const;
    
};

