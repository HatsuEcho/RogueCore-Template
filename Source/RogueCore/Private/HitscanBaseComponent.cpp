#include "HitscanBaseComponent.h"

UHitscanBaseComponent::UHitscanBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageComponent = NULL;
    this->Damage = NULL;
    this->MaxPenetrations = 0;
    this->ImpactDecalSize = EImpactDecalSize::Small;
    this->RicochetBehavior = ERicochetBehavior::All;
    this->RicochetChance = 0.00f;
    this->GeneralImpactAudioVolume = 1.00f;
    this->ImpactDelay = 0.02f;
    this->RicochetOnWeakspotOnly = false;
    this->RicochetMaxRange = 700.00f;
}

void UHitscanBaseComponent::Server_StopFire_Implementation() {
}

void UHitscanBaseComponent::Server_RemoveDebris_Implementation(int32 instance, int32 Component) {
}


