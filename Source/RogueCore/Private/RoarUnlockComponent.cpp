#include "RoarUnlockComponent.h"

URoarUnlockComponent::URoarUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffect = NULL;
    this->Range = 1000.00f;
}

void URoarUnlockComponent::Server_DoRoar_Implementation() {
}


void URoarUnlockComponent::All_ShowRoar_Implementation(FVector_NetQuantize Location) {
}


