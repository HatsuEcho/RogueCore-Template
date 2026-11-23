#include "ProjectileBurstComponent.h"

UProjectileBurstComponent::UProjectileBurstComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuseTime = 1.00f;
    this->FragmentClass = NULL;
    this->FragmentCount = 6;
    this->ArcAngle = 360.00f;
    this->YawOffset = 0.00f;
    this->bFragmentsIgnoreEachOther = true;
    this->BurstSystem = NULL;
    this->BurstSound = NULL;
}

void UProjectileBurstComponent::Burst() {
}

void UProjectileBurstComponent::All_Burst_Implementation(FVector_NetQuantize InLocation) {
}


