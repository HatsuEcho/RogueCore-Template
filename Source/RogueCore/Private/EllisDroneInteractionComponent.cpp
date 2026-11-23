#include "EllisDroneInteractionComponent.h"

UEllisDroneInteractionComponent::UEllisDroneInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionTime = 0.00f;
    this->CanUse = true;
    this->DisableOnuse = true;
}

void UEllisDroneInteractionComponent::StopUsing() {
}

void UEllisDroneInteractionComponent::StartUsing(float interactionSpeed) {
}

bool UEllisDroneInteractionComponent::IsInUse() const {
    return false;
}

bool UEllisDroneInteractionComponent::GetCanUse() const {
    return false;
}


