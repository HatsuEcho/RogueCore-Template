#include "UnlockRerollParticipantComponent.h"

UUnlockRerollParticipantComponent::UUnlockRerollParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUnlockRerollParticipantComponent::ServerRequestReroll_Implementation(const FUnlockRerollRequest& Request) {
}

void UUnlockRerollParticipantComponent::ServerRequestHealthBoost_Implementation(const FUnlockRerollHealthBoostRequest& Request) {
}

void UUnlockRerollParticipantComponent::ClientRerollResponse_Implementation(const FUnlockRerollResponse& Response) {
}

void UUnlockRerollParticipantComponent::ClientRerollHealthBoostResponse_Implementation(const FUnlockRerollHealthBoostResponse& Response) {
}


