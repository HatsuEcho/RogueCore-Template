#include "StaticSpawnPointSelection.h"

FStaticSpawnPointSelection::FStaticSpawnPointSelection() {
    this->Type = EStaticSpawnPointSelectionType::Any;
    this->Gameplay = EStaticSpawnPointGameplaySelection::Any;
    this->TypeBitMask = 0;
}

