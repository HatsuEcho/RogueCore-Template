#include "RandomSpamAttackComponent.h"

URandomSpamAttackComponent::URandomSpamAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Pattern.AddDefaulted(5);
    this->PatternLoopDelay = 0.20f;
    this->bLoopPattern = true;
    this->ProjectileClass = NULL;
    this->bProjectilesIgnoreEachOther = true;
    this->ShelterRadius = 1500.00f;
    this->bIgnoreDownedPlayers = true;
    this->OrbSystem = NULL;
    this->OrbFadeOutTime = 2.00f;
    this->bDebugDraw = false;
    this->OrbFX = NULL;
}



void URandomSpamAttackComponent::HandleAttackWindowEnd(FName InWindowName) {
}

void URandomSpamAttackComponent::HandleAttackWindowBegin(FName InWindowName) {
}

void URandomSpamAttackComponent::All_SpamShotFired_Implementation(FVector_NetQuantize InOrigin, FVector_NetQuantizeNormal InDirection) {
}

void URandomSpamAttackComponent::All_SetOrbActive_Implementation(bool bInActive) {
}


