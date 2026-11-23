#include "SpawnActorWithDebrisPosComponent.h"
#include "Templates/SubclassOf.h"

USpawnActorWithDebrisPosComponent::USpawnActorWithDebrisPosComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistanceBetweenSpwans = 100.00f;
    this->AddTerrainPlacementBlockers = true;
    this->AvoidImportantLocations = false;
    this->MinDistanceToImportantLocations = 100.00f;
    this->SeedPlacementFromOwnerLocation = false;
}

bool USpawnActorWithDebrisPosComponent::PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* Setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, FSpawnActorDelegate OnSpawned, FVector CustomLocation) {
    return false;
}

bool USpawnActorWithDebrisPosComponent::PlaceActorsUsingParams(const FPlaceActorParams& InParams, TArray<AActor*>& OutSpawnedActors) {
    return false;
}

bool USpawnActorWithDebrisPosComponent::PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* Setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*>& OutSpawnedActors, FVector CustomLocation, float UseStaticSpawnPointProbability, FStaticSpawnPointSelection StaticSpawnPointType, FPlaceActorPathRequirement PathRequirement) {
    return false;
}

bool USpawnActorWithDebrisPosComponent::GetLocations(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* Setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<FTransform>& OutLocations, FVector CustomLocation, FPlaceActorPathRequirement PathRequirement) {
    return false;
}

void USpawnActorWithDebrisPosComponent::AddTerrainPlacement(AActor* Actor, AProceduralSetup* Setup) {
}



void USpawnActorWithDebrisPosComponent::BroadcastSpawnDuringGeneration() {
}

