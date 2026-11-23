#include "DifficultySetting.h"

UDifficultySetting::UDifficultySetting() {
    this->HazardBonus = 0.00f;
    this->LevelTimeScaleModifier = 1.00f;
    this->EnvironmentalDamageModifier = 0.50f;
    this->ExtraLargeEnemyDamageResistance.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceB.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceC.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceD.AddDefaulted(4);
    this->EnemyDamageResistance.AddDefaulted(4);
    this->SmallEnemyDamageResistance.AddDefaulted(4);
    this->EnemyDamageModifier.AddDefaulted(4);
    this->EnemyToEnemyDamageModifier = 1.00f;
    this->EnemyCountModifier.AddDefaulted(4);
    this->BossDifficultyScaler = 1.00f;
    this->PointExtractionScaler = 1.00f;
    this->SpecialEncounterModifier = 1.00f;
    this->FriendlyFireModifier = 0.33f;
    this->RecurringWaveCount = 2;
    this->MinimumTimeBetweenRecurringWaves = 45.00f;
    this->RecurringWaveClosedTimeAfterStart = 60.00f;
    this->RecurringWaveClosedTimeBeforeRed = 180.00f;
    this->MinPoolSize = 5;
    this->SpeedModifier = 1.00f;
    this->AttackCooldownModifier = 1.00f;
    this->ProjectileSpeedModifier = 1.00f;
    this->AlivePlayerCountScaling = NULL;
    this->HeathRegenerationMax = 0.25f;
    this->ReviveHealthRatio = 0.40f;
}

bool UDifficultySetting::IsUnLocked(UObject* WorldContext) const {
    return false;
}

float UDifficultySetting::GetHazardBonus() const {
    return 0.0f;
}


