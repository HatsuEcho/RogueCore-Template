#include "ReadyUpManager.h"

UReadyUpManager::UReadyUpManager() {
}

void UReadyUpManager::StartReadyUp(const FSingleDelegate& OnCompleted) {
}

void UReadyUpManager::SetIsReady(const AFSDPlayerState* InPlayerState) {
}

bool UReadyUpManager::IsReadyingUp() const {
    return false;
}

EReadyUpStage UReadyUpManager::GetReadyUpStage() const {
    return EReadyUpStage::NotActive;
}

TArray<FReadyUpParticipant> UReadyUpManager::GetReadyUpParticipants() const {
    return TArray<FReadyUpParticipant>();
}



void UReadyUpManager::SetPlayerReady(const AFSDPlayerState* InPlayerState, const bool IsReady) {
}

bool UReadyUpManager::IsPlayerReady(const AFSDPlayerState* InPlayerState) const {
    return false;
}

float UReadyUpManager::GetReadyUpHoldSecondsRemaining() const {
    return 0.0f;
}

