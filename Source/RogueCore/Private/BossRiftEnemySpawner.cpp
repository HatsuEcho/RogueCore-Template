#include "BossRiftEnemySpawner.h"

ABossRiftEnemySpawner::ABossRiftEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DifficultyPerSpawn = 25.00f;
    this->SpawnInterval = 20.00f;
    this->InitialDelay = 15.00f;
    this->MaxAliveDifficulty = 0.00f;
    this->bAlert = true;
    this->SpawnLocation = EBossEnemySpawnLocation::BossRift;
    this->SpawnDistance = 2000.00f;
    this->SpawnPointCount = 2;
    this->SpawnManager = NULL;
}




void ABossRiftEnemySpawner::HandleEnemySpawned(APawn* Enemy) {
}

void ABossRiftEnemySpawner::All_EnemiesSpawning_Implementation(const TArray<FVector>& Locations, int32 EnemyCount) {
}


