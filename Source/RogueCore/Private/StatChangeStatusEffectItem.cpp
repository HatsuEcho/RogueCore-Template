#include "StatChangeStatusEffectItem.h"

UStatChangeStatusEffectItem::UStatChangeStatusEffectItem() {
    this->Stat = NULL;
    this->StatDisplayTransform = EItemUpgradeNumberTransformType::None;
    this->StatChange = 0.00f;
    this->AffectedByResistances = false;
}

UStatusEffect* UStatChangeStatusEffectItem::CreateStatSTE(UObject* Owner, UPawnStat* PawnStat, const float StartingValue, const EStatusEffectPopSetting PopSetting, const EStatusEffectDeathAction DeathAction) {
    return NULL;
}

UStatChangeStatusEffectItem* UStatChangeStatusEffectItem::AddStatToStatusEffect(UStatusEffect* StatusEffect, UPawnStat* StatToAdd, const float StatValue) {
    return NULL;
}


