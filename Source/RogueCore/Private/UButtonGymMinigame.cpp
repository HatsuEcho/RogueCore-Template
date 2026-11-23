#include "UButtonGymMinigame.h"
#include "EGymGameMode.h"

UUButtonGymMinigame::UUButtonGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGameMode::Button;
    this->IntervalIncrease = 1.00f;
}

void UUButtonGymMinigame::IFrameChange(bool On) {
}


