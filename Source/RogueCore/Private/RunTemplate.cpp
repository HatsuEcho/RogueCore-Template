#include "RunTemplate.h"

URunTemplate::URunTemplate() {
    this->Type = ERunType::Default;
    this->IsUnlockedFromStart = false;
    this->DefaultStageTemplate = NULL;
    this->StagesLeftWhenBossBiomeStarts = 1;
    this->BannedObjectivesDepth = ERunDepth::None;
    this->BannedObjectivesDNA = NULL;
    this->BannedObjectivesMutator = NULL;
    this->HazardBonusDepth1 = 1.00f;
    this->HazardBonusDepth2 = 1.00f;
    this->HazardBonusDepth3 = 1.00f;
    this->HazardBonusDepth4 = 1.00f;
    this->DepthDifficulty1 = NULL;
    this->DepthDifficulty2 = NULL;
    this->DepthDifficulty3 = NULL;
    this->DepthDifficulty4 = NULL;
    this->StageLayoutForDepth1 = NULL;
    this->StageLayoutForDepth2 = NULL;
    this->StageLayoutForDepth3 = NULL;
    this->StageLayoutForDepth4 = NULL;
}

TArray<FSecondaryObjective> URunTemplate::GetSecondaryObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FSecondaryObjective>();
}

ERunType URunTemplate::GetRunType() const {
    return ERunType::Default;
}

TArray<FPrimaryObjective> URunTemplate::GetPrimaryObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FPrimaryObjective>();
}

float URunTemplate::GetLevelTimeScalingForRunMode(const ERunMode RunMode) const {
    return 0.0f;
}

float URunTemplate::GetHazardBonusForRunMode(const ERunMode RunMode) const {
    return 0.0f;
}

float URunTemplate::GetHazardBonusForDepth(const ERunDepth Depth) const {
    return 0.0f;
}

TArray<FExpeniteObjective> URunTemplate::GetExpeniteObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FExpeniteObjective>();
}

TArray<UStageTemplateOverride*> URunTemplate::GetAvailableBossesForDepth(const ERunDepth Depth) const {
    return TArray<UStageTemplateOverride*>();
}



float URunTemplate::GetHazardBonusForRunDifficulty(const ERunDifficulty RunDifficulty) const {
    return 0.0f;
}

