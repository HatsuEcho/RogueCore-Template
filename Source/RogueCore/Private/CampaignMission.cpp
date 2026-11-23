#include "CampaignMission.h"

UCampaignMission::UCampaignMission() {
    this->PlanetZone = NULL;
    this->MissionCompleteShout = NULL;
    this->OverrideMutators = false;
    this->MutatorOverride = ECampaignMutators::AllowNone;
    this->RunTemplate = NULL;
    this->RunDifficulty = ERunDifficulty::None;
    this->Mutators = ECampaignMutators::Default;
    this->Complexity = NULL;
    this->Duration = NULL;
    this->Boss = NULL;
    this->Mutator = NULL;
    this->MigrationClearanceLevel = NULL;
}

UStageTemplate* UCampaignMission::GetMissionTemplate() const {
    return NULL;
}



FObjectiveMissionIcon UCampaignMission::GetMissionIcon() const {
    return FObjectiveMissionIcon{};
}

