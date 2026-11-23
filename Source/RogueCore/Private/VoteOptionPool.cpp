#include "VoteOptionPool.h"

UVoteOptionPool::UVoteOptionPool() {
    this->LockTelemetryIdentifier = false;
    this->MaxVoteOptions = 0;
    this->Pairing = EVoteOptionPairing::NegativeAndPositive;
}

TArray<UVoteOptionAction*> UVoteOptionPool::GetVoteOptionActions() {
    return TArray<UVoteOptionAction*>();
}



TSoftClassPtr<UVoteWidget> UVoteOptionPool::GetVoteWidgetSoftClassPtr() const {
    return NULL;
}

