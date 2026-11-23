#include "DifficultyController.h"
#include "Net/UnrealNetwork.h"

UDifficultyController::UDifficultyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageDifficultyProgression = NULL;
    this->SoonNewDifficultyTime = 20.00f;
    this->EnemyCountModifierUsed = false;
    this->CurrentDifficulty = 0;
    this->NextDifficultyPlayerCount = 1.00f;
    this->NextDifficultyTime = 0.00f;
    this->SoonNextDifficultyTime = 0.00f;
    this->WarningTimeBeforeNextDifficulty = 20.00f;
    this->IsCurrentDifficultyChanged = false;
}

void UDifficultyController::ToggleStageProgressionWarnings(bool suggestExtraction) {
}

void UDifficultyController::Server_IncrementDifficulty_Implementation() {
}

void UDifficultyController::OnRepCurrentDifficulty() {
}

float UDifficultyController::GetTimeToNextDifficulty() const {
    return 0.0f;
}

UStageDifficultyProgression* UDifficultyController::GetStageDifficultyProgression() const {
    return NULL;
}

int32 UDifficultyController::GetCurrentDifficulty() const {
    return 0;
}

void UDifficultyController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDifficultyController, CurrentDifficulty);
    DOREPLIFETIME(UDifficultyController, NextDifficultyPlayerCount);
    DOREPLIFETIME(UDifficultyController, NextDifficultyTime);
    DOREPLIFETIME(UDifficultyController, SoonNextDifficultyTime);
}


