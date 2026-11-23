#include "DepthDifficulty.h"

FDepthDifficulty::FDepthDifficulty() {
    this->LevelTimeScaleModifier = 0.00f;
    this->EnvironmentalDamageModifier = 0.00f;
    this->EnemyDamageModifier = 0.00f;
    this->EnemyCountModifier = 0.00f;
    this->StationaryDifficultyModifier = 0.00f;
    this->RecurringWaveCountModifier = 0;
    this->AttackCooldownModifier = 0.00f;
    this->ProjectileSpeedModifier = 0.00f;
    this->EnemySpeedModifier = 0.00f;
}

