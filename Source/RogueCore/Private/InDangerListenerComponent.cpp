#include "InDangerListenerComponent.h"

UInDangerListenerComponent::UInDangerListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DamageThreshold = 1.00f;
    this->TimeLimit = 0.00f;
    this->CoolDown = 0.00f;
}

void UInDangerListenerComponent::Reset() {
}


