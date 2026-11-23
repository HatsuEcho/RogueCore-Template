#include "ShockBlaster.h"
#include "HitscanComponent.h"

AShockBlaster::AShockBlaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitscanComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitscanComponent"));
    this->ImpactEffect = NULL;
    this->BeamEffect = NULL;
    this->ImpactSound = NULL;
    this->BounceDelay = 0.15f;
    this->RicochetRange = 500.00f;
    this->AmmoCostPerBounce = 30.00f;
    this->AttitudeQuery = 0;
    this->DamagepctPerCharge = 0.12f;
}


void AShockBlaster::Server_RegisterHit_Implementation(AActor* Hit, float Damage, UPhysicalMaterial* PhysMaterial, int32 clipAmount) {
}

void AShockBlaster::Server_OnHitScan_Hit_Implementation(const FHitResult& InHitResult, const float InDamage, const uint32 InRicochetCount) {
}

void AShockBlaster::OnHitScan_Hit(const FHitResult& InHitResult, const bool InAlwaysPenetrate) {
}

void AShockBlaster::DoBounce() {
}

void AShockBlaster::All_ShowHit_Implementation(AActor* Hit) {
}

void AShockBlaster::All_OnHitScan_Hit_Implementation(FVector_NetQuantize InHitLocation) {
}



void AShockBlaster::Server_ShowArc_Implementation(FVector_NetQuantize InFrom, FVector_NetQuantize InTo, UPrimitiveComponent* InHitComponent, bool InFromMuzzle) {
}

void AShockBlaster::All_ShowArc_Implementation(FVector_NetQuantize InFrom, FVector_NetQuantize InTo, UPrimitiveComponent* InHitComponent, bool InFromMuzzle) {
}

