#include "RadioactiveFlaresUnlockComponent.h"

URadioactiveFlaresUnlockComponent::URadioactiveFlaresUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(1);
    this->Range = EUnlockLogicRange::Short;
    this->PulseInterval = 0.25f;
}

void URadioactiveFlaresUnlockComponent::OnFlareThrown(AFlare* Flare) {
}


