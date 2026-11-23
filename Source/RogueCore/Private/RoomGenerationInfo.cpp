#include "RoomGenerationInfo.h"

FRoomGenerationInfo::FRoomGenerationInfo() {
    this->RoomGroup = NULL;
    this->ConstructionGenerationAsset = NULL;
    this->ConstructionBudgetMultiplier = 0.00f;
    this->ResourceMultiplier = 0.00f;
    this->DNARoomQueryIndex = 0;
    this->CanHaveEnemies = false;
    this->CanBeRotated = false;
    this->CanHaveExitElevator = false;
    this->bOverrideRoomQuery = false;
}

