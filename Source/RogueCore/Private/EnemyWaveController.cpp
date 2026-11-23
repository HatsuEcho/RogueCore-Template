#include "EnemyWaveController.h"

UEnemyWaveController::UEnemyWaveController() {
    this->Type = EWaveControllerType::Normal;
    this->IsComplete = false;
    this->IsSuitableForSolo = true;
    this->bIsVisible = true;
}


TArray<FVector> UEnemyWaveController::SpawnRifts(const FVector InQueryLocation, const FRiftSpawnOverrides Overrides) {
    return TArray<FVector>();
}

void UEnemyWaveController::SetVisible(const bool NewVisible) {
}


void UEnemyWaveController::RemoveRifts() {
}



bool UEnemyWaveController::IsVisible() const {
    return false;
}

FEnemyWaveIndex UEnemyWaveController::GetWaveIndex() const {
    return FEnemyWaveIndex{};
}

EWaveControllerType UEnemyWaveController::GetType() const {
    return EWaveControllerType::Normal;
}

void UEnemyWaveController::GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

void UEnemyWaveController::GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

TArray<FVector> UEnemyWaveController::GetLastSpawnedRiftLocations() const {
    return TArray<FVector>();
}


