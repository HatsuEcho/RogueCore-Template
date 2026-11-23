#include "RunCreationParameters.h"

FRunCreationParameters::FRunCreationParameters() {
    this->RunMode = ERunMode::None;
    this->RunDepth = ERunDepth::None;
    this->RunHazard = ERunHazard::None;
    this->RunTemplate = NULL;
    this->RunSeedOverride = 0;
    this->StageSeedOverride = 0;
    this->ActiveStageOverride = 0;
    this->BiomeOverride = NULL;
    this->PlanetZoneOverride = NULL;
    this->DifficultyOverride = NULL;
    this->BossOverride = NULL;
    this->DnaOverride = NULL;
    this->RunDifficulty = ERunDifficulty::None;
    this->IsCheatRun = false;
}

