#include "RadialBladeAttackComponent.h"

URadialBladeAttackComponent::URadialBladeAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFireBetweenGenericNotifies = true;
    this->FireInterval = 0.35f;
    this->BladesPerVolley = 4;
    this->VolleyYawOffset = 0.00f;
    this->SpawnRadius = 250.00f;
    this->BladeSpeed = 1200.00f;
    this->BladeLifetime = 5.00f;
    this->BladeHeight = 1200.00f;
    this->BladeBottomOffset = 100.00f;
    this->BladeHalfWidth = 40.00f;
    this->BladeHalfThickness = 40.00f;
    this->MaxBlades = 64;
    this->HitDamage = NULL;
    this->bIgnoreDownedPlayers = true;
    this->bBlocksWeaponFire = true;
    this->BlockerPhysicalMaterial = NULL;
    this->BladeSystem = NULL;
    this->BladePositionsParam = TEXT("BladePositions");
    this->BladeYawsParam = TEXT("BladeYaws");
    this->BladeAgesParam = TEXT("BladeAges");
    this->BladeHeightParam = TEXT("BladeHeight");
    this->BladeBottomOffsetParam = TEXT("BladeBottomOffset");
    this->BladeSpeedParam = TEXT("BladeSpeed");
    this->BladeCountParam = TEXT("BladeCount");
    this->BladeSound = NULL;
    this->BladeSoundEndTrigger = TEXT("OnAttackEnd");
    this->BladeSoundLifetime = 0.00f;
    this->bDebugDraw = false;
    this->BladeFX = NULL;
    this->RotationComponent = NULL;
    this->blocker = NULL;
}

void URadialBladeAttackComponent::SetFiring(bool firing) {
}



void URadialBladeAttackComponent::OnGenericNotify() {
}

bool URadialBladeAttackComponent::IsFiring() const {
    return false;
}

float URadialBladeAttackComponent::GetCurrentBossYaw_Implementation() const {
    return 0.0f;
}

TArray<FRadialBlade> URadialBladeAttackComponent::GetBlades() const {
    return TArray<FRadialBlade>();
}

int32 URadialBladeAttackComponent::GetActiveBladeCount() const {
    return 0;
}

void URadialBladeAttackComponent::FireVolleyNow() {
}

void URadialBladeAttackComponent::All_FireVolley_Implementation(FVector_NetQuantize Origin, float BaseYaw) {
}

void URadialBladeAttackComponent::All_ClearBlades_Implementation() {
}


