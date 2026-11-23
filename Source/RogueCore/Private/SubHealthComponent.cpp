#include "SubHealthComponent.h"

USubHealthComponent::USubHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthbarType = EHealthbarType::None;
    this->passthroughDamageWhenDisabled = true;
    this->EnemyHealthScaling = EEnemyHealthScaling::LargeEnemy;
    this->CountDirectDamage = true;
}

void USubHealthComponent::SetPassthroughDamageWhenDisabled(bool NewPassthroughDamageWhenDisabled) {
}

void USubHealthComponent::SetCanTakeDamage(bool CanTakeDamage) {
}

float USubHealthComponent::GetHealthPct() const {
    return 0.0f;
}

float USubHealthComponent::GetHealth() const {
    return 0.0f;
}

bool USubHealthComponent::GetCanTakeDamage() const {
    return false;
}


