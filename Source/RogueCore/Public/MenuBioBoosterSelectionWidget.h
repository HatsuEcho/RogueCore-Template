#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BXEUnlockInstance.h"
#include "EBioBoosterDeckLockReason.h"
#include "Templates/SubclassOf.h"
#include "WindowWidget.h"
#include "MenuBioBoosterSelectionWidget.generated.h"

class UBXEUnlockBase;
class UBXEUnlockRarity;
class UBioBoosterDeck;
class UMenuBioBoosterSelectionWidget;
class UObject;
class UPlayerCharacterID;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UMenuBioBoosterSelectionWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDeckSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnClassDecksFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_SelectSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_EquipDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Hint_SelectSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Hint_PickDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Hint_NotAscended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* ShownCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ShownTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ShownDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ShownEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* PinnedCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* PinnedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBioBoosterDeck* PendingDeckToSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBioBoosterDeck*> ShownAvailableDecks;
    
public:
    UMenuBioBoosterSelectionWidget();

    UFUNCTION(BlueprintCallable)
    bool TryEquipDeck(UBioBoosterDeck* InDeck);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSlotSelection(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void TogglePinnedCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor);
    
    UFUNCTION(BlueprintCallable)
    void ShowCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(UPlayerCharacterID* InCharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlotForDeck(UBioBoosterDeck* InDeck);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RestorePinnedCard();
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_SelectionChanged(int32 InSelectedSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Refreshed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RebuildEquippedDecks(const TArray<UBioBoosterDeck*>& InEquippedDecks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RebuildAvailableDecks(const TArray<UBioBoosterDeck*>& InAvailableDecks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PinnedCardChanged(UBXEUnlockBase* InPinnedCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_HintChanged(const FText& InHintText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DeckEquipped(UBioBoosterDeck* InDeck, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CharacterChanged(UPlayerCharacterID* InCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CardShown(const FBXEUnlockInstance& InCardInstance, FLinearColor InAccentColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CardCleared();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMenuBioBoosterSelectionWidget* OpenBioBoosterSelection(UObject* WorldContextObject, TSubclassOf<UMenuBioBoosterSelectionWidget> MenuClass, UPlayerCharacterID* InCharacterID, UBioBoosterDeck* InDeckToReplace, int32 InZOrder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDecksUpdated(const TArray<UBioBoosterDeck*>& InBioBoosterDecks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShownEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShownDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockBase* GetShownCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockBase* GetPinnedCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDeckSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHintText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBioBoosterDeck*> GetEquippedDecks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBioBoosterDeckLockReason GetDeckLockReason(UBioBoosterDeck* InDeck, int32 InSlotIndex, int32& OutRequiredLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBioBoosterDeck*> GetAvailableDecks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSelectSlot(int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipDeckIntoSlot(UBioBoosterDeck* InDeck, int32 InSlotIndex) const;
    
};

