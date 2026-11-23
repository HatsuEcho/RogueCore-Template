#include "BossSafeZoneMutator.h"

UBossSafeZoneMutator::UBossSafeZoneMutator() {
    this->InitialDelay = 20.00f;
    this->Interval = 30.00f;
    this->bPauseWhileBossImmune = true;
    this->ZoneCount = 1;
    this->MinSpawnDistance = 600.00f;
    this->MaxSpawnDistance = 1500.00f;
    this->MinDistanceBetweenZones = 1200.00f;
    this->ZoneClass = NULL;
    this->TellDuration = 2.00f;
    this->TellShout = NULL;
}


