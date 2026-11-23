#include "HotRockUnlockComponent.h"

UHotRockUnlockComponent::UHotRockUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(1);
    this->HotRockStatusEffect = NULL;
    this->HotRockEffect = NULL;
    this->EffectReferenceRadius = 300.00f;
    this->CheckInterval = 0.25f;
    this->SurfaceProbeOffset = 50.00f;
    this->MaxHotZones = 16;
}

void UHotRockUnlockComponent::OnRadialDamage(const FBXEDamageEvent& DamageEvent, const FDamageParams& DamageParams) {
}

void UHotRockUnlockComponent::All_SpawnHotRockEffect_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal, const float Radius, const float Duration) {
}


