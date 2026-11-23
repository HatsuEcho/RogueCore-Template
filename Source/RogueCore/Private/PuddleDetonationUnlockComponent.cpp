#include "PuddleDetonationUnlockComponent.h"

UPuddleDetonationUnlockComponent::UPuddleDetonationUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(1);
    this->TriggerBlueprintEvents = false;
    this->HitRadius = 100.00f;
    this->CanChainReact = false;
    this->SpawnGracePeriod = 0.20f;
    this->ExplosionDamage = NULL;
    this->ExplosionRange = EUnlockLogicRange::Short;
    this->ExplosionEffect = NULL;
    this->ExplosionSound = NULL;
}

void UPuddleDetonationUnlockComponent::TriggerExplosionSound_Implementation(USoundBase* ExplosionSoundToPlay, const FVector& ExplosionLocation) {
}

void UPuddleDetonationUnlockComponent::All_ShowEffects_Implementation(const FVector_NetQuantize& Location) {
}


