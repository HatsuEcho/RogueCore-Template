#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "BXEUnlockInstance.h"
#include "BioBoosterCardIconWidget.generated.h"

class UBXEUnlockBase;
class UBXEUnlockRarity;
class UBioBoosterCardIconWidget;
class UButton;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBioBoosterCardIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBioBoosterCardIconDelegate, UBioBoosterCardIconWidget*, InCardIcon);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterCardIconDelegate OnCardHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterCardIconDelegate OnCardUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterCardIconDelegate OnCardClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameFillBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameFillBrightnessHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameFillAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColorHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoveredScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Card_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor AccentColor;
    
public:
    UBioBoosterCardIconWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractable(bool InInteractable);
    
    UFUNCTION(BlueprintCallable)
    void SetCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetAccentColor(FLinearColor InAccentColor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_UpdateVisuals();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighlighted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCardInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCardHovered() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockRarity* GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXEUnlockInstance GetCardInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCardIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockBase* GetCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAccentColor() const;
    
};

