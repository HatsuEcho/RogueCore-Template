#include "ExplosiveShotsComponent.h"

UExplosiveShotsComponent::UExplosiveShotsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 150.00f;
    this->Sound = NULL;
    this->effect = NULL;
}

void UExplosiveShotsComponent::All_ShowEffects_Implementation(const FVector_NetQuantize& Location) {
}


