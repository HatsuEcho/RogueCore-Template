#include "VoteParticipantComponent.h"

UVoteParticipantComponent::UVoteParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoteWidget = NULL;
    this->MyVoteIndex = -1;
}

void UVoteParticipantComponent::Server_Vote_Implementation(int32 InVoteIndex) {
}

void UVoteParticipantComponent::Client_SetVoteData_Implementation(const FVoteData& InData) {
}


