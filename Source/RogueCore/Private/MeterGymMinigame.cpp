#include "MeterGymMinigame.h"
#include "EGymGameMode.h"

UMeterGymMinigame::UMeterGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGameMode::Meter;
    this->ExtraSafeZoneHitArea = 0.00f;
    this->HitAnimationTime = 0.20f;
}

void UMeterGymMinigame::PlayerInputWidget(bool Hit) {
}

void UMeterGymMinigame::IFrameChange(bool On) {
}


