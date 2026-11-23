#include "EnemyWaveManager.h"
#include "Templates/SubclassOf.h"

UEnemyWaveManager::UEnemyWaveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsRecurringWavesEnabled = true;
    this->IsDifficultyBasedSpawningEnabled = false;
    this->RiftSpawnDistance = 3000.00f;
    this->RiftOptimalSpawnDistance = 2000.00f;
    this->RiftMinSpawnDistance = 200.00f;
    this->RiftMinDistanceToImportantLocations = 300.00f;
    this->RiftSpawnCount = 3;
    this->RiftsArePermanentAndAlwaysActive = false;
    this->RiftsAreOpen = false;
    this->GameMode = NULL;
    this->SpawnManager = NULL;
    this->MaxRiftDistance = 12000.00f;
    this->RiftTopUpCooldown = 5.00f;
}

TArray<UEnemyWaveController*> UEnemyWaveManager::TriggerWaves(const TSubclassOf<UEnemyWaveController> waveClass, const int32 Amount) {
    return TArray<UEnemyWaveController*>();
}

UEnemyWaveController* UEnemyWaveManager::TriggerWave(const TSubclassOf<UEnemyWaveController> waveClass, const FEnemyWaveIndex WaveIndex) {
    return NULL;
}

UEnemyWaveController* UEnemyWaveManager::TriggerSecretWave(const TSubclassOf<UEnemyWaveController> waveClass) {
    return NULL;
}

void UEnemyWaveManager::StopAllSecretWaves() {
}

TArray<FVector> UEnemyWaveManager::SpawnRifts(const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides) {
    return TArray<FVector>();
}

void UEnemyWaveManager::SetAllWavesAreBlocked(const bool allWavesAreBlocked) {
}

void UEnemyWaveManager::PushDisableDifficultyBasedSpawns(UObject* Owner) {
}

void UEnemyWaveManager::PopDisableDifficultyBasedSpawns(UObject* Owner) {
}

void UEnemyWaveManager::OnMatchEnded() {
}

void UEnemyWaveManager::OnEnemySpawned(APawn* Enemy) {
}

void UEnemyWaveManager::GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

void UEnemyWaveManager::GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

bool UEnemyWaveManager::GetAllWavesAreBlocked() const {
    return false;
}

bool UEnemyWaveManager::AreRiftsOpen() const {
    return false;
}

void UEnemyWaveManager::AddExternallySpawnedRift(ACorespawnRift* InNewRift) {
}



void UEnemyWaveManager::OnRiftBossFightOver() {
}

