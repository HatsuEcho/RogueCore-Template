#include "ProceduralTutorial.h"

AProceduralTutorial::AProceduralTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RunSeedOverride = -1;
    this->StageSeedOverride = -1;
    this->RunTemplate = NULL;
    this->RunDepth = ERunDepth::Depth1;
    this->RunHazard = ERunHazard::Hazard3;
    this->RunMode = ERunMode::Default;
    this->ActiveStage = -1;
    this->Biome = NULL;
    this->PlanetZoneOverride = NULL;
    this->DnaOverride = NULL;
    this->ProceduralOverride = NULL;
    this->DifficultyOverride = NULL;
    this->BossOverride = NULL;
    this->OverrideDifficulty = NULL;
    this->SpecialEvent = NULL;
    this->RunDifficulty = ERunDifficulty::Normal;
    this->ProceduralSetupOverride = NULL;
}


