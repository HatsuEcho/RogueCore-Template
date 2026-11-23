#include "OverheatReactionsComponent.h"

UOverheatReactionsComponent::UOverheatReactionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AoEOnOverheat = false;
    this->AoEDamageAsset = NULL;
    this->StatusEffectOnOverheat = false;
    this->StatusEffectClass = NULL;
    this->AmmoRegenOnOverheat = false;
    this->AmmoRegenAmount = 30;
    this->AmmoRegenDuration = 1.00f;
    this->OwningWeapon = NULL;
}

void UOverheatReactionsComponent::OnWeaponOverheated(AItem* InItem) {
}

void UOverheatReactionsComponent::OnAmmoRegenComplete() {
}

float UOverheatReactionsComponent::GetAmmoRegenProgress() const {
    return 0.0f;
}


