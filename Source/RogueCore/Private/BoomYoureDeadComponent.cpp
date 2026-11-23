#include "BoomYoureDeadComponent.h"

UBoomYoureDeadComponent::UBoomYoureDeadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionEffect = NULL;
    this->ExplosionSound = NULL;
    this->SpreadPercent = 1.00f;
}

void UBoomYoureDeadComponent::All_ShowEffects_Implementation(const FVector_NetQuantize& Location, float Size) {
}



void UBoomYoureDeadComponent::TriggerExplosionSound_Implementation(USoundBase* ExplosionSoundToPlay, const FVector& ExplosionLocation) {
}

