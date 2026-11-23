#include "PlayerDataStorage.h"

FPlayerDataStorage::FPlayerDataStorage() {
    this->Type = ESeamlessTravelStorageType::Travel;
    this->Character = NULL;
    this->PlayerClass = NULL;
    this->HealthFraction = 0.00f;
    this->TotalKills = 0;
}

