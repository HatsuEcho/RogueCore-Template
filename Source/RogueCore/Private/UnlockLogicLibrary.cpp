#include "UnlockLogicLibrary.h"

UUnlockLogicLibrary::UUnlockLogicLibrary() {
}

float UUnlockLogicLibrary::GetRangeDistance(const EUnlockLogicRange Range, const APlayerCharacter* PlayerCharacter) {
    return 0.0f;
}

float UUnlockLogicLibrary::GetProximityDistance() {
    return 0.0f;
}

float UUnlockLogicLibrary::GetPlayerModifiedDistance(const float Distance, const APlayerCharacter* PlayerCharacter) {
    return 0.0f;
}

float UUnlockLogicLibrary::GetDefaultRangeDistance(const EUnlockLogicRange Range) {
    return 0.0f;
}

TArray<APlayerCharacter*> UUnlockLogicLibrary::FindPlayersInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<APlayerCharacter*>& PlayersToIgnore) {
    return TArray<APlayerCharacter*>();
}

TArray<AFSDPawn*> UUnlockLogicLibrary::FindDamageableEnemiesInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<AActor*>& ActorsToIgnore) {
    return TArray<AFSDPawn*>();
}

TArray<AFSDPawn*> UUnlockLogicLibrary::FindDamageableEnemiesInCone(const UObject* WorldContext, const FVector ConeOrigin, const FVector ConeDirection, const float ConeHalfAngle, const float ConeLength, const float ConeHeight, const TArray<AActor*>& ActorsToIgnore) {
    return TArray<AFSDPawn*>();
}

TArray<APlayerCharacter*> UUnlockLogicLibrary::FindAlivePlayersInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<APlayerCharacter*>& PlayersToIgnore) {
    return TArray<APlayerCharacter*>();
}


