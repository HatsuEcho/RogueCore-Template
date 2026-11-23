#include "BurstProjectileAttackComponent.h"

UBurstProjectileAttackComponent::UBurstProjectileAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurstCount = 1;
    this->DelayBetweenBursts = 0.00f;
}

void UBurstProjectileAttackComponent::FireNextBurst() {
}


