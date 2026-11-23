#include "BossRiskVectorEffectsComponent.h"

UBossRiskVectorEffectsComponent::UBossRiskVectorEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossHealth = NULL;
}

void UBossRiskVectorEffectsComponent::OnBossDied(UHealthComponentBase* HealthComponent) {
}


