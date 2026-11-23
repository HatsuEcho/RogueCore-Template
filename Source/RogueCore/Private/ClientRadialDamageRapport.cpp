#include "ClientRadialDamageRapport.h"

FClientRadialDamageRapport::FClientRadialDamageRapport() {
    this->DamageCauser = NULL;
    this->Instigator = NULL;
    this->BaseDamage = 0.00f;
    this->RadialRadius = 0.00f;
    this->CritLevel = 0;
    this->DamageVector = EDamageVector::Ranged;
    this->Notify = false;
    this->BaseRadius = 0.00f;
    this->ArmorDamageType = EArmorDamageType::Normal;
}

