#include "BXEDamageSubsystem.h"

UBXEDamageSubsystem::UBXEDamageSubsystem() {
    this->CriticalDamageMultiplier = 100.00f;
    this->RunningRadialDamageIdCounter = 0;
    this->DamageEvents = NULL;
}

FPrefetchedData UBXEDamageSubsystem::PrefetchDamageCondition(AActor* FromActor) {
    return FPrefetchedData{};
}

float UBXEDamageSubsystem::Local_DamageTargetWithInstances(const TArray<FDamageInstance>& damageInstances, const FDamageParams& Params) {
    return 0.0f;
}

float UBXEDamageSubsystem::Local_DamageTargetWithInstance(const FDamageInstance& DamageInstance, const FDamageParams& Params) {
    return 0.0f;
}

float UBXEDamageSubsystem::Local_DamageTarget(UDamageAsset* DamageAsset, const FDamageParams& Params, FPrefetchedData prefetchedResults) {
    return 0.0f;
}

float UBXEDamageSubsystem::DamageTargetWithInstances(UObject* WorldContext, const TArray<FDamageInstance>& Instances, const FDamageParams& Params, FPrefetchedData prefetchedResults) {
    return 0.0f;
}

float UBXEDamageSubsystem::DamageTargetWithInstance(UObject* WorldContext, const FDamageInstance& instance, const FDamageParams& Params, FPrefetchedData prefetchedResults) {
    return 0.0f;
}

float UBXEDamageSubsystem::DamageTarget(UObject* WorldContext, UDamageAsset* DamageAsset, const FDamageParams& Params, FPrefetchedData prefetchedResults) {
    return 0.0f;
}


