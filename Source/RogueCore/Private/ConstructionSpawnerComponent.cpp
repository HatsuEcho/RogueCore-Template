#include "ConstructionSpawnerComponent.h"

UConstructionSpawnerComponent::UConstructionSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostConstructionSpawnDataAsset = NULL;
    this->LogSpawning = true;
    this->PrintSpawning = true;
}

void UConstructionSpawnerComponent::AddRuntimePostConstructionSpawnDataAsset(const UPostConstructionSpawnDataAsset* InSpawnDataAsset) {
}

void UConstructionSpawnerComponent::AddRuntimePostConstructionSpawnData(UPostConstructionSpawnData* InSpawnData, bool InAddToFinalSpawnPass) {
}

void UConstructionSpawnerComponent::AddConstructionGroupToRoom(int32 InRoomID, FConstructionGenerationGroup InGroup) {
}


