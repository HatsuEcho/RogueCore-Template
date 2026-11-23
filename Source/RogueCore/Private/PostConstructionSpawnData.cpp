#include "PostConstructionSpawnData.h"

UPostConstructionSpawnData::UPostConstructionSpawnData() {
    this->SpawnAmount = 1;
    this->SpawnChance = 1.00f;
    this->SpawnPriority = 0;
    this->SpawnChanceMutator = NULL;
    this->SpawnInAssaultPace = 16777215;
    this->OnlySpawnOnFirstStage = false;
    this->OnlySpawnOnLastStage = false;
    this->MaxDistanceToCustomActor = -1.00f;
    this->BlockSpawnMutator = NULL;
}


