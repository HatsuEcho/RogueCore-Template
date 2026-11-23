#include "RunSetup.h"

FRunSetup::FRunSetup() {
    this->RunSeed = 0;
    this->RunDepth = ERunDepth::None;
    this->RunHazard = ERunHazard::None;
    this->RunMode = ERunMode::None;
    this->RunTemplate = NULL;
    this->RunDNA = NULL;
    this->RunBiome = NULL;
    this->RunMutator = NULL;
    this->PlanetZone = NULL;
    this->BossStageOverride = NULL;
    this->RunBoss = ERunBossType::None;
    this->RunDifficulty = ERunDifficulty::None;
    this->IsCheatRun = false;
}

