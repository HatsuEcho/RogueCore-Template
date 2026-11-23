#include "TerrainAndStaticPostConstructionSpawnData.h"

UTerrainAndStaticPostConstructionSpawnData::UTerrainAndStaticPostConstructionSpawnData() {
    this->Positioning = NULL;
    this->DistanceCostCurve = NULL;
    this->MinDistanceToOtherLocations = 300.00f;
    this->MinDistanceToImportantLocations = 500.00f;
    this->UseStaticSpawnPointProbability = 0.80f;
    this->CanBackfillStaticSpawnPoint = true;
}


