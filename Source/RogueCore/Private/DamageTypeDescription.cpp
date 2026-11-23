#include "DamageTypeDescription.h"

FDamageTypeDescription::FDamageTypeDescription() {
    this->Type = EDamageType::Fire;
    this->LinkedUnlock = NULL;
    this->IconScale = 0.00f;
}

