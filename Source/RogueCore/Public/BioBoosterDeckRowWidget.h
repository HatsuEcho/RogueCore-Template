#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "EBioBoosterDeckLockReason.h"
#include "BioBoosterDeckRowWidget.generated.h"

class UBXEUnlockBase;
class UBXEUnlockRarity;
class UBioBoosterDeck;
class UBioBoosterDeckRowWidget;
class UButton;
class UPlayerCharacterID;
class UTexture2D;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBioBoosterDeckRowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBioBoosterDeckRowDelegate, UBioBoosterDeckRowWidget*, InRow);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBioBoosterDeckRowCardDelegate, UBioBoosterDeckRowWidget*, InRow, UBXEUnlockBase*, InCard, UBXEUnlockRarity*, InRarity);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowDelegate OnRowClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowDelegate OnRowHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowDelegate OnRowUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowCardDelegate OnCardHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowCardDelegate OnCardUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckRowCardDelegate OnCardClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NeutralAccentColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundBrightnessHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedContentOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LockedAtLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LockedAscensionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LockedForeignDeckText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LockedUnavailableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Row_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBioBoosterDeck* Deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* ViewingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* SelectedCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ClassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor AccentColor;
    
public:
    UBioBoosterDeckRowWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotIndex(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCard(UBXEUnlockBase* InCard);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(EBioBoosterDeckLockReason InReason, int32 InRequiredLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetDeck(UBioBoosterDeck* InDeck, UPlayerCharacterID* InViewingCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_SelectedCardChanged(UBXEUnlockBase* InCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DeckChanged(UBioBoosterDeck* InDeck, UPlayerCharacterID* InViewingCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRowHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRowUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleRowHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleRowClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetViewingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockBase* GetSelectedCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLockText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBioBoosterDeckLockReason GetLockReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBioBoosterDeck* GetDeck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetClassIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAccentColor() const;
    
    UFUNCTION(BlueprintCallable)
    static void ClearToolTipBinding(UWidget* InWidget);
    
};

