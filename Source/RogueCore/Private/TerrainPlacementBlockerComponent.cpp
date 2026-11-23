#include "TerrainPlacementBlockerComponent.h"

UTerrainPlacementBlockerComponent::UTerrainPlacementBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->CapsuleType = EDebrisColliderType::Object;
    this->bCheckForBlockers = false;
}


