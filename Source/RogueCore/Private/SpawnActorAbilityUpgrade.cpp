#include "SpawnActorAbilityUpgrade.h"

USpawnActorAbilityUpgrade::USpawnActorAbilityUpgrade() {
    this->ActorClass = NULL;
    this->IsAllowedToSpawnOnClient = true;
    this->Lifetime = 0.00f;
    this->StackLifetime = false;
}


