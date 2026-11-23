#include "PlanetGenerationLibrary.h"

UPlanetGenerationLibrary::UPlanetGenerationLibrary() {
}

FGeneratedRunsForBiome UPlanetGenerationLibrary::GetRunsAtDepth(const FGeneratedRunsForBiome& GeneratedRuns, const ERunDepth Depth) {
    return FGeneratedRunsForBiome{};
}

FRunCreationParameters UPlanetGenerationLibrary::CreateRunCreationParameters(const FGeneratedRunForBiome& GeneratedRun, const ERunMode RunMode, const ERunHazard RunHazard) {
    return FRunCreationParameters{};
}



FGeneratedRunForBiome UPlanetGenerationLibrary::CreateGeneratedRunFromStageSeed(const FStageSeedParameters& SeedParameters) {
    return FGeneratedRunForBiome{};
}

FGeneratedRunForBiome UPlanetGenerationLibrary::CreateGeneratedRunFromRun(const URun* Run) {
    return FGeneratedRunForBiome{};
}

