#include "BXEDamageEvent.h"

FBXEDamageEvent::FBXEDamageEvent() {
    this->DamageVector = EDamageVector::Ranged;
    this->ArmorDamage = 0.00f;
    this->BaseDamage = 0.00f;
    this->CalculatedDamage = 0.00f;
    this->DamageDealt = 0.00f;
    this->DamageMultiplier = 0.00f;
    this->EventMask = 0;
    this->CritLevel = 0;
    this->KillingBlow = false;
    this->IsWeakPoint = false;
    this->Crit = false;
    this->Failed = false;
    this->Radial = false;
}

