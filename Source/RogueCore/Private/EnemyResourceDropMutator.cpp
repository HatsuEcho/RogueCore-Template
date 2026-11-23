#include "EnemyResourceDropMutator.h"

UEnemyResourceDropMutator::UEnemyResourceDropMutator() {
    this->Resource = NULL;
    this->DropAmount = 1.00f;
    this->DropChance = 1.00f;
    this->DeactivateOnExitArrival = true;
    this->DeactivateOnRed = true;
}


