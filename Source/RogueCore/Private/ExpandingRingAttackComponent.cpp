#include "ExpandingRingAttackComponent.h"

UExpandingRingAttackComponent::UExpandingRingAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rings.AddDefaulted(1);
    this->RingSystem = NULL;
    this->RingRadiusParam = TEXT("Ring_Radius");
    this->RingHalfHeightParam = TEXT("Ring_HalfHeight");
    this->RingFadeOutTime = 2.00f;
    this->RingSound = NULL;
    this->RingSoundEndTrigger = TEXT("OnAttackEnd");
    this->RingSoundLifetime = 2.00f;
    this->ImpactTraceCount = 0;
    this->ImpactSegmentsPerFrame = 8;
    this->ImpactTraceChannel = ECC_GameTraceChannel16;
    this->ImpactPositionsParam = TEXT("ImpactPositions");
    this->ImpactNormalsParam = TEXT("ImpactNormals");
    this->ImpactCountParam = TEXT("ImpactCount");
    this->bIgnoreDownedPlayers = true;
    this->bDebugDraw = false;
}



void UExpandingRingAttackComponent::HandleRangedAttackNotify() {
}

TArray<FExpandingRing> UExpandingRingAttackComponent::GetActiveRings() const {
    return TArray<FExpandingRing>();
}

void UExpandingRingAttackComponent::FireRingNow(int32 RingIndex) {
}

void UExpandingRingAttackComponent::All_FireRing_Implementation(FVector_NetQuantize Origin, uint8 RingIndex) {
}


