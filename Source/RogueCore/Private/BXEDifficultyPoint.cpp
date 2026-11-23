#include "BXEDifficultyPoint.h"

FBXEDifficultyPoint::FBXEDifficultyPoint() {
    this->PreemptiveWarningTime = 0.00f;
    this->PreemptiveWarningShout = NULL;
    this->EnemyCountScale = 0.00f;
    this->WaveAtStart = NULL;
    this->StartMusic = NULL;
    this->MissionControlStartShout = NULL;
    this->MissionControlStartShoutNoExtraction = NULL;
    this->MissionControlStartShoutRepeatInterval = 0.00f;
    this->AfterPreemptiveWarningTime = 0.00f;
    this->AfterPreemptiveWarningShout = NULL;
    this->DifficultyStartShout_Dwarf = NULL;
}

