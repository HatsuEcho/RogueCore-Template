#include "BXETradeWidget.h"

UBXETradeWidget::UBXETradeWidget() {
    this->bHandleCloseCommand = false;
    this->bBlockCloseCommand = true;
    this->MyUpgradesBox = NULL;
    this->TeammatesBox = NULL;
    this->AbstainButton = NULL;
    this->TitleText = NULL;
    this->InstructionText = NULL;
    this->StatusText = NULL;
    this->GiftsText = NULL;
    this->countdownText = NULL;
    this->UnlockEntryClass = NULL;
    this->TeammateEntryClass = NULL;
    this->SelectedOfferIndex = -1;
    this->CountdownRemaining = 0.00f;
}

bool UBXETradeWidget::SelectUnlock(int32 InOfferIndex) {
    return false;
}






bool UBXETradeWidget::IsTradeFinishing() const {
    return false;
}

bool UBXETradeWidget::HasSelectedUnlock() const {
    return false;
}

bool UBXETradeWidget::HasDecided() const {
    return false;
}

void UBXETradeWidget::HandleUnlockEntryClicked(UBXETradeEntryWidget* InEntry) {
}

void UBXETradeWidget::HandleTeammateEntryClicked(UBXETradeEntryWidget* InEntry) {
}

void UBXETradeWidget::HandleAbstainClicked() {
}

bool UBXETradeWidget::GiveSelectedUnlockTo(AFSDPlayerState* InTeammate) {
    return false;
}

FBXETradeData UBXETradeWidget::GetTradeData() const {
    return FBXETradeData{};
}

TArray<AFSDPlayerState*> UBXETradeWidget::GetTeammates() const {
    return TArray<AFSDPlayerState*>();
}

FBXEUnlockInstance UBXETradeWidget::GetSelectedUnlock() const {
    return FBXEUnlockInstance{};
}

int32 UBXETradeWidget::GetSelectedOfferIndex() const {
    return 0;
}

TArray<FBXEUnlockInstance> UBXETradeWidget::GetMyOffer() const {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXETradeGift> UBXETradeWidget::GetMyGifts() const {
    return TArray<FBXETradeGift>();
}

void UBXETradeWidget::ClearSelection() {
}

bool UBXETradeWidget::CanGiveSelectedUnlockTo(AFSDPlayerState* InTeammate) const {
    return false;
}

bool UBXETradeWidget::CanDecide() const {
    return false;
}

bool UBXETradeWidget::Abstain() {
    return false;
}


