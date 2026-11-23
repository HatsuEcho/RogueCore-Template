#include "NetDamageInstance.h"

FNetDamageInstance::FNetDamageInstance() {
    this->BaseDamage = 0.00f;
    this->ArmorPiercing = 0.00f;
    this->ArmorDamage = 0.00f;
    this->WeakpointMultiplier = 0.00f;
    this->DamageVector = EDamageVector::Ranged;
    this->Notify = false;
    this->StunDuration = 0.00f;
}

