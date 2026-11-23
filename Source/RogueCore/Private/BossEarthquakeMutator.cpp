#include "BossEarthquakeMutator.h"

UBossEarthquakeMutator::UBossEarthquakeMutator() {
    this->InitialDelay = 25.00f;
    this->IntervalMin = 40.00f;
    this->IntervalMax = 60.00f;
    this->CrevassesPerQuakeMin = 1;
    this->CrevassesPerQuakeMax = 2;
    this->CrevasseSpawnRadius = 1200.00f;
    this->StalactitesPerQuakeMin = 3;
    this->StalactitesPerQuakeMax = 5;
    this->StalactiteTargetRadius = 800.00f;
    this->StalactiteMinSeparation = 300.00f;
    this->StalactiteGroundSnapDistance = 600.00f;
    this->MinCeilingHeight = 400.00f;
    this->MaxCeilingHeight = 6000.00f;
    this->WarningDuration = 1.75f;
    this->InitialFallSpeed = 200.00f;
    this->FallAcceleration = 2500.00f;
}


