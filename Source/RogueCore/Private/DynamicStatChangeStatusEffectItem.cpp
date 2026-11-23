#include "DynamicStatChangeStatusEffectItem.h"

UDynamicStatChangeStatusEffectItem::UDynamicStatChangeStatusEffectItem() {
}

UStatusEffect* UDynamicStatChangeStatusEffectItem::CreateDynamicStatSTE(UObject* Owner, UPawnStat* PawnStat, float StartingValue, UDynamicStatChangeStatusEffectItem*& outSTEItem, const EStatusEffectPopSetting PopSetting, const EStatusEffectDeathAction DeathAction) {
    return NULL;
}

UStatChangeStatusEffectItem* UDynamicStatChangeStatusEffectItem::AddDynamicStatToStatusEffect(UStatusEffect* StatusEffect, UPawnStat* StatToAdd, const float StatValue) {
    return NULL;
}


