#include "SeamlessTravelStorage.h"

USeamlessTravelStorage::USeamlessTravelStorage() {
    this->ChosenDifficulty = NULL;
    this->MissionTime = 0.00f;
}

void USeamlessTravelStorage::UnStoreActorForSeamlessTravel(AActor* Actor) {
}

void USeamlessTravelStorage::StoreActorForSeamlessTravel(AActor* Actor) {
}

TArray<APlayerCharacter*> USeamlessTravelStorage::GetStoredCharacters() const {
    return TArray<APlayerCharacter*>();
}

void USeamlessTravelStorage::ClearStageState() {
}

void USeamlessTravelStorage::ClearPersistentState() {
}

void USeamlessTravelStorage::ClearCharacterState() {
}

void USeamlessTravelStorage::ClearAllState() {
}


