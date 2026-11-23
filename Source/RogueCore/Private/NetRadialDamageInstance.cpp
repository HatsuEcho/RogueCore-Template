#include "NetRadialDamageInstance.h"

FNetRadialDamageInstance::FNetRadialDamageInstance() {
    this->Target = NULL;
    this->ArmorPiercing = 0.00f;
    this->ArmorDamage = 0.00f;
    this->HitComponent = NULL;
    this->ArmorDamageMultiplier = 0.00f;
    this->StunDuration = 0.00f;
}

