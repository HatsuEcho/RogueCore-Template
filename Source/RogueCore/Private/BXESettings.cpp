#include "BXESettings.h"

UBXESettings::UBXESettings() {
    this->ProgressionSettings = NULL;
    this->MissionStats = NULL;
    this->BXETreasureSettings = NULL;
    this->RunSettings = NULL;
    this->RewardTree = NULL;
    this->BXENameBank = NULL;
    this->ObjectivesAreRequired = true;
    this->CreditsPerPrimaryObjective = 1000;
    this->CreditsPerSecondaryObjective = 1000;
    this->XPPerPrimaryObjective = 1000;
    this->XPPerExpenite = 2;
    this->XPNiteValueMultiplier = 1.00f;
    this->XPPerKill = 10.00f;
    this->XPToReclaimerPointsCurve = NULL;
    this->MasteryXPPerLevel = 10000.00f;
    this->EndOfMasteryProgressionMeritRewardPerLevel = 750.00f;
    this->RPToMasteryXPRatio = 1.00f;
    this->DeepCoreBiome = NULL;
    this->TutorialBiome = NULL;
    this->CinematicBiome = NULL;
    this->RiskVectorVotePool = NULL;
    this->XPPerEventCompleted = 1250;
    this->XPPerRerollToken = 50;
    this->PriorityTargetReclaimerPointsBonus = 0.25f;
}


