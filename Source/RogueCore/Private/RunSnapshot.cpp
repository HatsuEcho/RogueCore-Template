#include "RunSnapshot.h"

FRunSnapshot::FRunSnapshot() {
    this->Version = 0;
    this->MissionTime = 0.00f;
    this->TotalEnemiesKilled = 0;
    this->Difficulty = NULL;
    this->StageIndex = 0;
    this->bKickedFromRun = false;
    this->bHostedTeam = false;
    this->bSavedAndQuit = false;
}

