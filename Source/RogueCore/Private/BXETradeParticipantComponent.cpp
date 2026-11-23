#include "BXETradeParticipantComponent.h"

UBXETradeParticipantComponent::UBXETradeParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TradeWidget = NULL;
}

void UBXETradeParticipantComponent::Server_GiveUnlock_Implementation(int32 InOfferIndex, AFSDPlayerState* InReceiver) {
}

void UBXETradeParticipantComponent::Server_Abstain_Implementation() {
}

void UBXETradeParticipantComponent::Client_SetTradeData_Implementation(const FBXETradeData& InData) {
}


