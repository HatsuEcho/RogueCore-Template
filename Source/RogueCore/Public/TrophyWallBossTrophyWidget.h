#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "ETrophyWallTrophyState.h"
#include "TrophyWallBossDisplay.h"
#include "TrophyWallBossTrophyWidget.generated.h"

class UBiome;
class UButton;
class UEnemyID;
class USoundBase;
class UTexture2D;
class UTrophySheet;
class UTrophyWallBossTrophyWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UTrophyWallBossTrophyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrophyWallBossTrophyDelegate, UTrophyWallBossTrophyWidget*, InTrophy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBossTrophyDelegate OnClaimRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBossTrophyDelegate OnTrophyHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophyWallBossTrophyDelegate OnTrophyUnhovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyID*, FTrophyWallBossDisplay> BossDisplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ClaimSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClaimLayerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BossColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClaimableBossOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClaimedBossOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmptyOutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClaimedOutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmptyFillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClaimedFillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GlowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoveredScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotKilledToolTipFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClaimableToolTipFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClaimedToolTipFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Trophy_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrophySheet* Sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyID* Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* BossIcon;
    
public:
    UTrophyWallBossTrophyWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetTrophy(UTrophySheet* InSheet, UBiome* InBiome, UEnemyID* InBoss);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Claimed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrophyHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlowVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClaimable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrophyScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetToolTipText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrophyWallTrophyState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrophySheet* GetSheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetOutlineColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetGlowColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetFillColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBossName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBossIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBossColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyID* GetBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetBiome() const;
    
};

