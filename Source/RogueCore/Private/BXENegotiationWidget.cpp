#include "BXENegotiationWidget.h"

UBXENegotiationWidget::UBXENegotiationWidget() {
    this->SelectedUnlockIndex = -1;
    this->SelectedDroneUnlockIndex = -1;
}

bool UBXENegotiationWidget::SelectUnlock(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex) {
    return false;
}

bool UBXENegotiationWidget::SelectDroneUnlock(int32 InDroneUnlockIndex) {
    return false;
}

bool UBXENegotiationWidget::RequestUnlock(int32 InUnlockIndex) {
    return false;
}








bool UBXENegotiationWidget::IsNegotiationFinishing() const {
    return false;
}

TArray<AFSDPlayerState*> UBXENegotiationWidget::GetUnlockRequestedBy(int32 InUnlockIndex) {
    return TArray<AFSDPlayerState*>();
}

bool UBXENegotiationWidget::GetIsMyTurnPending() const {
    return false;
}

bool UBXENegotiationWidget::GetIsItMyTurn() const {
    return false;
}



float UBXENegotiationWidget::GetIntroPlaybackSpeed() const {
    return 0.0f;
}

float UBXENegotiationWidget::GetIntroDuration(const UWidgetAnimation* Animation) const {
    return 0.0f;
}

bool UBXENegotiationWidget::CanRequestUnlock(int32 InUnlockIndex) const {
    return false;
}

