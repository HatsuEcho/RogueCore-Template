#pragma once
#include "CoreMinimal.h"
#include "CoolDownProgressStyle.h"
#include "EPerkHUDActivationLocation.h"
#include "EPerkType.h"
#include "EPerkUsageType.h"
#include "PerkEffectItem.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "PerkAsset.generated.h"

class APlayerController;
class UBinkMediaTexture;
class UDialogDataAsset;
class UObject;
class UPerkActivationWidget;
class UPerkDescriptor;
class UPerkHUDIconWidget;
class UPerkLogic;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UPerkAsset : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHighlighted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerkType Type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkDescriptor* TypeDescriptor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBinkMediaTexture> BinkMovie;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRequiredLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnhancementPointCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkLogic>> LogicClasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkEffectItem> effects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUseCharges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnUseCharge;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownBetweenUse;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle CooldownUI;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkActivationWidget>> HudActivationWidgets;

public:
    UPerkAsset();

    UFUNCTION(BlueprintCallable)
    bool UseCharge(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsageType(const EPerkUsageType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerkUsageType GetUsageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetShoutOnUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRequiredLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPerkHUDIconWidget> GetHudIconWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UPerkActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDescriptor* GetDescriptor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescriptionAt(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCoolDownProgressStyle GetCooldownUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UBinkMediaTexture> GetBinkMovie();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCharge(APlayerController* PlayerController) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRankText() const;

};

