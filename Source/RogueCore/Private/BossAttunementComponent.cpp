#include "BossAttunementComponent.h"

UBossAttunementComponent::UBossAttunementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mutator = NULL;
    this->Boss = NULL;
}

void UBossAttunementComponent::OnCrystalDied(UHealthComponentBase* HealthComponent) {
}

void UBossAttunementComponent::OnBossDied(UHealthComponentBase* HealthComponent) {
}

bool UBossAttunementComponent::IsBossImmune() const {
    return false;
}

int32 UBossAttunementComponent::GetLiveCrystalCount() const {
    return 0;
}


