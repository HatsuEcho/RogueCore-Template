#include "DamageDataBase.h"

FDamageDataBase::FDamageDataBase() {
    this->PhysMaterial = NULL;
    this->BoneIndex = 0;
    this->IsRadial = false;
    this->CritLevel = 0;
    this->DamageImpulseOverride = NULL;
}

