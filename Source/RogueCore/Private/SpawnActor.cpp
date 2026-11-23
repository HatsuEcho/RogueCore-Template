#include "SpawnActor.h"

FSpawnActor::FSpawnActor() {
    this->SpawnActor = NULL;
    this->IsAllowedToSpawnOnClient = false;
    this->Amount = 0.00f;
    this->Lifetime = 0.00f;
}

