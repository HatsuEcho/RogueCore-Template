#include "BossLivingShieldComponent.h"

UBossLivingShieldComponent::UBossLivingShieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossHealth = NULL;
    this->Mutator = NULL;
    this->SpawnManager = NULL;
    this->BossMesh = NULL;
    this->ShellBossComponent = NULL;
}

void UBossLivingShieldComponent::OnEnemyDied(APawn* Enemy) {
}

void UBossLivingShieldComponent::OnBossDeath(UHealthComponentBase* HealthComponent) {
}

void UBossLivingShieldComponent::OnBossCanTakeDamageChanged(bool bInCanTakeDamage) {
}


