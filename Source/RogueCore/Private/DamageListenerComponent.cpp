#include "DamageListenerComponent.h"

UDamageListenerComponent::UDamageListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageTriggerFilter = NULL;
    this->DamageListenerProfile = 0;
    this->TriggerBlueprintEvents = false;
}


