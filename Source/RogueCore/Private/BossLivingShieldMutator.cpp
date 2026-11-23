#include "BossLivingShieldMutator.h"

UBossLivingShieldMutator::UBossLivingShieldMutator() {
    this->BaseDamagePerKill = 375.00f;
    this->DamageClass = NULL;
    this->InitialDelay = 5.00f;
    this->SpawnInterval = 1.00f;
    this->TargetAliveDifficulty = 150.00f;
    this->SpawnDifficulty = 40.00f;
    this->MinSpawnDifficulty = 25.00f;
    this->SpawnDistance = 1500.00f;
    this->SpawnLocationsPerWave = 2;
    this->KillBeamEffect = NULL;
    this->BeamStartParameter = TEXT("EnergyStart");
    this->BeamEndParameter = TEXT("EnergyEnd");
    this->bOverrideBeamColor = false;
    this->BeamColorParameter = TEXT("BeamColor");
    this->BeamBossSocket = TEXT("CenterMass");
    this->BeamStartHeightOffset = 50.00f;
    this->BeamDuration = 0.60f;
    this->BeamUpdateInterval = 0.05f;
    this->MaxConcurrentBeams = 12;
    this->BossPhysicalMaterialOverride = NULL;
    this->bShowInvulnerableShell = true;
}


