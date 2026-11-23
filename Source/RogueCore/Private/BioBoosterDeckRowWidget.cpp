#include "BioBoosterDeckRowWidget.h"

UBioBoosterDeckRowWidget::UBioBoosterDeckRowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BackgroundBrightness = 0.22f;
    this->BackgroundBrightnessHovered = 0.32f;
    this->BackgroundAlpha = 0.90f;
    this->LockedContentOpacity = 0.45f;
    this->LockedAtLevelText = FText::FromString(TEXT("Unlocks at"));
    this->LockedAscensionText = FText::FromString(TEXT("Requires Ascension"));
    this->LockedForeignDeckText = FText::FromString(TEXT("One deck from another class at a time"));
    this->LockedUnavailableText = FText::FromString(TEXT("Unavailable"));
    this->Row_Button = NULL;
    this->Deck = NULL;
    this->ViewingCharacter = NULL;
    this->SelectedCard = NULL;
    this->ClassIcon = NULL;
}

void UBioBoosterDeckRowWidget::UpdateVisuals() {
}

void UBioBoosterDeckRowWidget::SetSlotIndex(int32 InSlotIndex) {
}

void UBioBoosterDeckRowWidget::SetSelectedCard(UBXEUnlockBase* InCard) {
}

void UBioBoosterDeckRowWidget::SetSelected(bool InSelected) {
}

void UBioBoosterDeckRowWidget::SetLocked(EBioBoosterDeckLockReason InReason, int32 InRequiredLevel) {
}

void UBioBoosterDeckRowWidget::SetDeck(UBioBoosterDeck* InDeck, UPlayerCharacterID* InViewingCharacter) {
}




bool UBioBoosterDeckRowWidget::IsSelected() const {
    return false;
}

bool UBioBoosterDeckRowWidget::IsRowHovered() const {
    return false;
}

bool UBioBoosterDeckRowWidget::IsLocked() const {
    return false;
}

void UBioBoosterDeckRowWidget::HandleRowUnhovered() {
}

void UBioBoosterDeckRowWidget::HandleRowHovered() {
}

void UBioBoosterDeckRowWidget::HandleRowClicked() {
}

UPlayerCharacterID* UBioBoosterDeckRowWidget::GetViewingCharacter() const {
    return NULL;
}

int32 UBioBoosterDeckRowWidget::GetSlotIndex() const {
    return 0;
}

UBXEUnlockBase* UBioBoosterDeckRowWidget::GetSelectedCard() const {
    return NULL;
}

int32 UBioBoosterDeckRowWidget::GetRequiredLevel() const {
    return 0;
}

FText UBioBoosterDeckRowWidget::GetLockText() const {
    return FText::GetEmpty();
}

EBioBoosterDeckLockReason UBioBoosterDeckRowWidget::GetLockReason() const {
    return EBioBoosterDeckLockReason::None;
}

UBioBoosterDeck* UBioBoosterDeckRowWidget::GetDeck() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UBioBoosterDeckRowWidget::GetClassIcon() const {
    return NULL;
}

FLinearColor UBioBoosterDeckRowWidget::GetAccentColor() const {
    return FLinearColor{};
}

void UBioBoosterDeckRowWidget::ClearToolTipBinding(UWidget* InWidget) {
}


