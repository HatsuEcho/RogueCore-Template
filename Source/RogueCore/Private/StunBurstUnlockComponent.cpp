#include "StunBurstUnlockComponent.h"

UStunBurstUnlockComponent::UStunBurstUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = NULL;
}

void UStunBurstUnlockComponent::Server_DoBurst_Implementation() {
}


void UStunBurstUnlockComponent::All_ShowBurst_Implementation(FVector_NetQuantize Location) {
}


