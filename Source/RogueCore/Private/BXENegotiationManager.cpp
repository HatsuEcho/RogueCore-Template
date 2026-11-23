#include "BXENegotiationManager.h"

UBXENegotiationManager::UBXENegotiationManager() {
    this->BXEManager = NULL;
    this->RunManager = NULL;
}

TArray<AFSDPlayerState*> UBXENegotiationManager::GetPlayersForNegotiationStart(const UObject* WorldContext) {
    return TArray<AFSDPlayerState*>();
}


