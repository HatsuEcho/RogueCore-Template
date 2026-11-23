#include "PlayerTargetedCritChanceDamageParamBonus.h"

UPlayerTargetedCritChanceDamageParamBonus::UPlayerTargetedCritChanceDamageParamBonus() {
    this->TargetedType = EPlayerTargetedCritChanceType::IsPlayerTargeted;
    this->CanEffectStack = false;
    this->ExtraCritChance = 0.00f;
}


