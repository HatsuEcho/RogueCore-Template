#include "StageSeedParameters.h"

FStageSeedParameters::FStageSeedParameters() {
    this->RunSeed = 0;
    this->RunDepth = ERunDepth::None;
    this->RunHazard = ERunHazard::None;
    this->RunMode = ERunMode::None;
    this->RunTemplate = NULL;
    this->RunBiome = NULL;
    this->RunDNA = NULL;
    this->RunMutator = NULL;
    this->ActiveStage = 0;
    this->RunDifficulty = ERunDifficulty::None;
    this->IsCheatRun = false;
}

