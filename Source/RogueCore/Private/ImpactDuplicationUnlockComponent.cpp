#include "ImpactDuplicationUnlockComponent.h"

UImpactDuplicationUnlockComponent::UImpactDuplicationUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(3);
}

void UImpactDuplicationUnlockComponent::OnGrenadeThrown(AGrenade* Grenade, APlayerCharacter* Thrower) {
}


