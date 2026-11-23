#include "StaticSpawnPoint.h"

UStaticSpawnPoint::UStaticSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsUsed = false;
    this->Type = EStaticSpawnPointType::Small;
    this->GameplayRestrictions = NULL;
}

bool UStaticSpawnPoint::MatchesSelection(const FStaticSpawnPointSelection& InSelection) const {
    return false;
}


