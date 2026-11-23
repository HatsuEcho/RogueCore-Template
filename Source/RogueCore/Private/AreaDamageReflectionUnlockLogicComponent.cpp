#include "AreaDamageReflectionUnlockLogicComponent.h"

UAreaDamageReflectionUnlockLogicComponent::UAreaDamageReflectionUnlockLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(1);
    this->ShowDebugSphere = false;
    this->TriggerEffect = NULL;
    this->TriggerSound = NULL;
}

void UAreaDamageReflectionUnlockLogicComponent::TriggerEffectsManually(const FVector& Center, const float Radius) {
}

void UAreaDamageReflectionUnlockLogicComponent::OnSpreadDamage_Implementation(const AFSDPawn* SpreadFrom, const TArray<AFSDPawn*>& SpreadTo, const FBXEDamageEvent& DamageEvent, const FDamageParams& DamageParameters) {
}

bool UAreaDamageReflectionUnlockLogicComponent::CanSpreadDamage_Implementation(const AFSDPawn* SpreadFrom, const FBXEDamageEvent& DamageEvent, const FDamageParams& DamageParameters) const {
    return false;
}

void UAreaDamageReflectionUnlockLogicComponent::All_ShowEffects_Implementation(const FVector_NetQuantize& Center, const float Radius) {
}


