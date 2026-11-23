#include "RunSettings.h"
#include "Templates/SubclassOf.h"

URunSettings::URunSettings() {
    this->MaximumRunsPerBiome = 4;
    this->AddMissionsOfAllDifficulties = true;
}

TArray<URunTemplate*> URunSettings::GetAllRuns() const {
    return TArray<URunTemplate*>();
}

TArray<UPrimaryMutator*> URunSettings::GetAllMutators() const {
    return TArray<UPrimaryMutator*>();
}

TArray<TSubclassOf<UMissionDNA>> URunSettings::GetAllDNA() const {
    return TArray<TSubclassOf<UMissionDNA>>();
}



UVoteOptionPool* URunSettings::GetBossRiskVectorVotePool(ERunBossType Boss) const {
    return NULL;
}

