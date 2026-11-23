#include "FrozenPauseComponent.h"

UFrozenPauseComponent::UFrozenPauseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenPhysicalMaterial = NULL;
}

void UFrozenPauseComponent::OnFrozenChanged(bool bInFrozen) {
}


