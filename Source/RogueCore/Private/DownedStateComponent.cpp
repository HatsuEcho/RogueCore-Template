#include "DownedStateComponent.h"
#include "Templates/SubclassOf.h"

UDownedStateComponent::UDownedStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 1;
    this->DownedHealthLossPerSecond = 25.00f;
    this->TerrainRemovedFallThreshold = 5.00f;
    this->DownedBombActive = false;
    this->PlayIntroSequence = true;
    this->DownedBombDamage = NULL;
    this->DownedBombDamageAsset = NULL;
}

void UDownedStateComponent::TriggerDownedBombDamage() {
}

void UDownedStateComponent::Server_TriggerDownedBomb_Implementation() {
}


UDamageComponent* UDownedStateComponent::CreateDownedBombDamage(TSubclassOf<UDamageComponent> DamageClass) {
    return NULL;
}



void UDownedStateComponent::SetDownedBombRadialDamage(float Damage) {
}

void UDownedStateComponent::SetDownedBombDamage(UDamageAsset* DamageAsset, float Radius) {
}

