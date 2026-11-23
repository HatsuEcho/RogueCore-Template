#include "RadiationBoilsComponent.h"
#include "Net/UnrealNetwork.h"

URadiationBoilsComponent::URadiationBoilsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoilPopEffect = NULL;
    this->BoilCreatedSound = NULL;
    this->DamageType = NULL;
    this->DamageBonus = NULL;
    this->BoilCreatedSoundDelay = 0.30f;
    this->BoilPopSound = NULL;
    this->BoilMaxHealth = 30;
    this->BoilsToAddPerStage = 1;
    this->BoilGrowSpeed = 3.00f;
    this->DealDamagePercentOfHPOnPop = 0.10f;
    this->FlatDamage = 0.00f;
    this->DamageListenerProfile = 0;
    this->MaxBoils = 3;
    this->ExplodeBoilsAfterMaxStage = false;
    this->BoilSurfaceOffset = 5.00f;
}

void URadiationBoilsComponent::OnRep_StaticMeshComponentPool() {
}

void URadiationBoilsComponent::OnRep_AttachedBoilInfos(const TArray<FBoilInfo>& InLastInfos) {
}

void URadiationBoilsComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

void URadiationBoilsComponent::IncrementBoilStage() {
}

void URadiationBoilsComponent::BoilCreatedSoundTimerFinished() {
}

void URadiationBoilsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiationBoilsComponent, AttachedBoilInfos);
    DOREPLIFETIME(URadiationBoilsComponent, StaticMeshComponentPool);
}


