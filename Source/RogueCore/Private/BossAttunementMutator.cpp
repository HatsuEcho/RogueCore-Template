#include "BossAttunementMutator.h"
#include "BossAttunementCrystal.h"

UBossAttunementMutator::UBossAttunementMutator() {
    this->CrystalClass = ABossAttunementCrystal::StaticClass();
    this->CrystalHealth = 300.00f;
    this->CrystalPositioning = NULL;
    this->FirstSpawnDelay = 5.00f;
    this->CrystalsPerSpawnPerPlayerCount.AddDefaulted(4);
    this->MaxActiveCrystalsPerPlayerCount.AddDefaulted(4);
    this->MinDistanceFromBoss = 0.00f;
    this->MaxDistanceFromBoss = 1500.00f;
    this->MinDistanceBetweenCrystals = 600.00f;
    this->PlacementChecks = 150;
}


