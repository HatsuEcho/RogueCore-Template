#include "FSDServerListFilter.h"

FFSDServerListFilter::FFSDServerListFilter() {
    this->ProgressType = EFSDServerListFilterProgressType::Any;
    this->RunType = EServerListFilterRunType::Any;
    this->RunMode = EServerListFilterRunMode::Any;
    this->ModType = EFSDServerListFilterModdedType::Any;
    this->RunDepth = ERunDepth::None;
    this->RunLength = 0;
    this->RunComplexity = 0;
    this->RunBiome = NULL;
    this->RunMutator = NULL;
    this->RunDifficulty = EServerListFilterRunDifficulty::Any;
    this->RunHazard = ERunHazard::None;
}

