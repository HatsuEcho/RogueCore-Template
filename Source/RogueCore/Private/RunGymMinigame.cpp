#include "RunGymMinigame.h"
#include "EGymGameMode.h"

URunGymMinigame::URunGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGameMode::Run;
    this->EnemiesWidget = NULL;
}

void URunGymMinigame::IFrameChange(bool On) {
}


