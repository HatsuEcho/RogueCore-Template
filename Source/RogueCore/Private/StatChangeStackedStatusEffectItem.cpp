#include "StatChangeStackedStatusEffectItem.h"

UStatChangeStackedStatusEffectItem::UStatChangeStackedStatusEffectItem() {
    this->Stat = NULL;
    this->StatDisplayTransform = EItemUpgradeNumberTransformType::None;
    this->StatChange = 0.00f;
    this->AffectedByResistances = false;
}


