#include "BossComponent.h"

UBossComponent::UBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathAnimation = NULL;
}

void UBossComponent::WaitForBossDeathAnimation(const UObject* InWorldContextObject, AActor* InBoss, FLatentActionInfo InLatentInfo, float InMaxWaitTime) {
}

void UBossComponent::SetInvulnerableShellForcedVisible(bool bForcedVisible) {
}

bool UBossComponent::IsPlayingDeathAnimation() const {
    return false;
}

bool UBossComponent::IsInvulnerableShellForcedVisible() const {
    return false;
}

AActor* UBossComponent::GetBossRift_Implementation() const {
    return NULL;
}


