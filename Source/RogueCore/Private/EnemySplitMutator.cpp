#include "EnemySplitMutator.h"

UEnemySplitMutator::UEnemySplitMutator() {
    this->SplitCount = 2;
    this->SplitHealthMultiplierAdditive = -0.75f;
    this->SplitExpeniteDropMultiplier = 0.25f;
    this->SplitChance = 1.00f;
    this->SplitDamageMultiplierAdditive = -0.50f;
    this->ScaleOfSplit = 1.00f;
    this->DeactivateOnExitArrival = true;
    this->SplitSpawnEffect = NULL;
}

void UEnemySplitMutator::OnSplitEnemySpawned(APawn* Enemy) {
}


