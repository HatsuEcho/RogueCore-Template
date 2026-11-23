#include "TerrainPostConstructionSpawnData.h"

UTerrainPostConstructionSpawnData::UTerrainPostConstructionSpawnData() {
    this->Positioning = NULL;
    this->DistanceCostCurve = NULL;
    this->MinDistanceToOtherLocations = 300.00f;
    this->MinDistanceToImportantLocations = 500.00f;
}


