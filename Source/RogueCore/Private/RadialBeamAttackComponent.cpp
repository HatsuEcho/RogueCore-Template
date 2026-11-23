#include "RadialBeamAttackComponent.h"

URadialBeamAttackComponent::URadialBeamAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamCount = 4;
    this->BeamYawOffset = 0.00f;
    this->InnerRadius = 350.00f;
    this->MaxLength = 5000.00f;
    this->ImpactTraceChannel = ECC_GameTraceChannel16;
    this->BeamHalfWidth = 50.00f;
    this->BeamHalfHeight = 50.00f;
    this->HitDamage = NULL;
    this->DamageInterval = 0.75f;
    this->bIgnoreDownedPlayers = true;
    this->MaxHitRewind = 0.40f;
    this->bBlocksWeaponFire = true;
    this->BlockerRearExtension = 0.00f;
    this->BlockerPhysicalMaterial = NULL;
    this->BeamSystem = NULL;
    this->BeamLengthParam = TEXT("BeamLength");
    this->BeamPivotFraction = 0.50f;
    this->ImpactSystem = NULL;
    this->BeamFadeOutTime = 2.00f;
    this->BeamSound = NULL;
    this->BeamSoundEndTrigger = TEXT("OnAttackEnd");
    this->BeamSoundLifetime = 2.00f;
    this->bDebugDraw = false;
    this->RotationComponent = NULL;
    this->blocker = NULL;
    this->BeamAudio[0] = NULL;
    this->BeamAudio[1] = NULL;
}



void URadialBeamAttackComponent::HandleAttackWindowEnd(FName InWindowName) {
}

void URadialBeamAttackComponent::HandleAttackWindowBegin(FName InWindowName) {
}

float URadialBeamAttackComponent::GetSweepYaw_Implementation() const {
    return 0.0f;
}

TArray<FRadialBeam> URadialBeamAttackComponent::GetBeams() const {
    return TArray<FRadialBeam>();
}

bool URadialBeamAttackComponent::AreBeamsActive() const {
    return false;
}

void URadialBeamAttackComponent::All_SetBeamsActive_Implementation(bool bInActive) {
}


