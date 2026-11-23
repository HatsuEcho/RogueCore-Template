#include "BioBoosterCardIconWidget.h"

UBioBoosterCardIconWidget::UBioBoosterCardIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FrameFillBrightness = 0.16f;
    this->FrameFillBrightnessHovered = 0.38f;
    this->FrameFillAlpha = 0.92f;
    this->OutlineBrightness = 0.85f;
    this->LockedOpacity = 0.35f;
    this->HoveredScale = 1.08f;
    this->Card_Button = NULL;
    this->Card = NULL;
    this->Rarity = NULL;
}

void UBioBoosterCardIconWidget::UpdateVisuals() {
}

void UBioBoosterCardIconWidget::SetSelected(bool InSelected) {
}

void UBioBoosterCardIconWidget::SetLocked(bool InLocked) {
}

void UBioBoosterCardIconWidget::SetInteractable(bool InInteractable) {
}

void UBioBoosterCardIconWidget::SetCard(UBXEUnlockBase* InCard, UBXEUnlockRarity* InRarity, FLinearColor InAccentColor) {
}

void UBioBoosterCardIconWidget::SetAccentColor(FLinearColor InAccentColor) {
}


bool UBioBoosterCardIconWidget::IsSelected() const {
    return false;
}

bool UBioBoosterCardIconWidget::IsLocked() const {
    return false;
}

bool UBioBoosterCardIconWidget::IsHighlighted() const {
    return false;
}

bool UBioBoosterCardIconWidget::IsCardInteractable() const {
    return false;
}

bool UBioBoosterCardIconWidget::IsCardHovered() const {
    return false;
}

void UBioBoosterCardIconWidget::HandleButtonUnhovered() {
}

void UBioBoosterCardIconWidget::HandleButtonHovered() {
}

void UBioBoosterCardIconWidget::HandleButtonClicked() {
}

UBXEUnlockRarity* UBioBoosterCardIconWidget::GetRarity() const {
    return NULL;
}

FBXEUnlockInstance UBioBoosterCardIconWidget::GetCardInstance() const {
    return FBXEUnlockInstance{};
}

TSoftObjectPtr<UTexture2D> UBioBoosterCardIconWidget::GetCardIcon() const {
    return NULL;
}

UBXEUnlockBase* UBioBoosterCardIconWidget::GetCard() const {
    return NULL;
}

FLinearColor UBioBoosterCardIconWidget::GetAccentColor() const {
    return FLinearColor{};
}


