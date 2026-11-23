#include "MenuBioBoosterSelectionWidget.h"
#include "Templates/SubclassOf.h"

UMenuBioBoosterSelectionWidget::UMenuBioBoosterSelectionWidget() {
    this->MaxDeckSlots = 2;
    this->bShowEmptySlot = true;
    this->bOwnClassDecksFirst = true;
    this->Sound_SelectSlot = NULL;
    this->Sound_EquipDeck = NULL;
    this->Sound_Locked = NULL;
    this->Hint_SelectSlot = FText::FromString(TEXT("Select an equipped deck to replace, then pick a new one"));
    this->Hint_PickDeck = FText::FromString(TEXT("Pick a deck from the list to equip it in the selected slot"));
    this->Hint_NotAscended = FText::FromString(TEXT("Decks can be changed once this Reclaimer has ascended"));
    this->characterID = NULL;
    this->ShownCard = NULL;
    this->PinnedCard = NULL;
    this->PinnedRarity = NULL;
    this->PendingDeckToSelect = NULL;
}

bool UMenuBioBoosterSelectionWidget::TryEquipDeck(UBioBoosterDeck* InDeck) {
    return false;
}

void UMenuBioBoosterSelectionWidget::ToggleSlotSelection(int32 InSlotIndex) {
}

void UMenuBioBoosterSelectionWidget::TogglePinnedCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor) {
}

void UMenuBioBoosterSelectionWidget::ShowCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor) {
}

void UMenuBioBoosterSelectionWidget::SetCharacterID(UPlayerCharacterID* InCharacterID) {
}

void UMenuBioBoosterSelectionWidget::SelectSlotForDeck(UBioBoosterDeck* InDeck) {
}

void UMenuBioBoosterSelectionWidget::SelectSlot(int32 InSlotIndex) {
}

void UMenuBioBoosterSelectionWidget::RestorePinnedCard() {
}

void UMenuBioBoosterSelectionWidget::Refresh() {
}











UMenuBioBoosterSelectionWidget* UMenuBioBoosterSelectionWidget::OpenBioBoosterSelection(UObject* WorldContextObject, TSubclassOf<UMenuBioBoosterSelectionWidget> MenuClass, UPlayerCharacterID* InCharacterID, UBioBoosterDeck* InDeckToReplace, int32 InZOrder) {
    return NULL;
}

void UMenuBioBoosterSelectionWidget::HandleDecksUpdated(const TArray<UBioBoosterDeck*>& InBioBoosterDecks) {
}

FText UMenuBioBoosterSelectionWidget::GetShownEffects() const {
    return FText::GetEmpty();
}

FText UMenuBioBoosterSelectionWidget::GetShownDescription() const {
    return FText::GetEmpty();
}

UBXEUnlockBase* UMenuBioBoosterSelectionWidget::GetShownCard() const {
    return NULL;
}

int32 UMenuBioBoosterSelectionWidget::GetSelectedSlotIndex() const {
    return 0;
}

UBXEUnlockBase* UMenuBioBoosterSelectionWidget::GetPinnedCard() const {
    return NULL;
}

int32 UMenuBioBoosterSelectionWidget::GetMaxDeckSlots() const {
    return 0;
}

FText UMenuBioBoosterSelectionWidget::GetHintText() const {
    return FText::GetEmpty();
}

TArray<UBioBoosterDeck*> UMenuBioBoosterSelectionWidget::GetEquippedDecks() const {
    return TArray<UBioBoosterDeck*>();
}

EBioBoosterDeckLockReason UMenuBioBoosterSelectionWidget::GetDeckLockReason(UBioBoosterDeck* InDeck, int32 InSlotIndex, int32& OutRequiredLevel) const {
    return EBioBoosterDeckLockReason::None;
}

UPlayerCharacterID* UMenuBioBoosterSelectionWidget::GetCharacterID() const {
    return NULL;
}

TArray<UBioBoosterDeck*> UMenuBioBoosterSelectionWidget::GetAvailableDecks() const {
    return TArray<UBioBoosterDeck*>();
}

bool UMenuBioBoosterSelectionWidget::CanSelectSlot(int32 InSlotIndex) const {
    return false;
}

bool UMenuBioBoosterSelectionWidget::CanEquipDeckIntoSlot(UBioBoosterDeck* InDeck, int32 InSlotIndex) const {
    return false;
}


