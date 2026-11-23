#include "BXETradeEntryWidget.h"

UBXETradeEntryWidget::UBXETradeEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->Icon = NULL;
    this->Title = NULL;
    this->Subtitle = NULL;
    this->Frame = NULL;
    this->OfferIndex = -1;
    this->bSelected = false;
    this->bEntryEnabled = true;
}

void UBXETradeEntryWidget::SetUnlock(const FBXEUnlockInstance& InUnlock, int32 InOfferIndex) {
}

void UBXETradeEntryWidget::SetSubtitle(const FText& InSubtitle) {
}

void UBXETradeEntryWidget::SetSelected(bool InSelected) {
}

void UBXETradeEntryWidget::SetPlayer(AFSDPlayerState* InPlayerState) {
}

void UBXETradeEntryWidget::SetEntryEnabled(bool InEnabled) {
}




bool UBXETradeEntryWidget::IsUnlockEntry() const {
    return false;
}

bool UBXETradeEntryWidget::IsSelected() const {
    return false;
}

bool UBXETradeEntryWidget::IsEntryEnabled() const {
    return false;
}

void UBXETradeEntryWidget::HandleButtonUnhovered() {
}

void UBXETradeEntryWidget::HandleButtonHovered() {
}

void UBXETradeEntryWidget::HandleButtonClicked() {
}

FBXEUnlockInstance UBXETradeEntryWidget::GetUnlock() const {
    return FBXEUnlockInstance{};
}

AFSDPlayerState* UBXETradeEntryWidget::GetPlayer() const {
    return NULL;
}

int32 UBXETradeEntryWidget::GetOfferIndex() const {
    return 0;
}

FLinearColor UBXETradeEntryWidget::GetAccentColor() const {
    return FLinearColor{};
}


