#include "GrappleStrikeAbility.h"
#include "EAbilityActivationType.h"
#include "EAbilityDeactivationType.h"

UGrappleStrikeAbility::UGrappleStrikeAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationType = EAbilityActivationType::OnPress;
    this->DeactivationType = EAbilityDeactivationType::OnPress;
}


