#include "FSDServerlistClientRogueCore.h"

UFSDServerlistClientRogueCore::UFSDServerlistClientRogueCore() {
    this->ShuffleSeedForServerList = 0;
}

void UFSDServerlistClientRogueCore::SetServerListFilter(const FFSDServerListFilter& NewFilter) {
}

FFSDServerListFilter UFSDServerlistClientRogueCore::GetServerFilter() const {
    return FFSDServerListFilter{};
}

TArray<FServerListLobby> UFSDServerlistClientRogueCore::GetLastFoundLobbies() const {
    return TArray<FServerListLobby>();
}

void UFSDServerlistClientRogueCore::ClearServerListFilter() {
}


