#include "DamageNumberReplicationData.h"

FDamageNumberReplicationData::FDamageNumberReplicationData() {
    this->DamageType = NULL;
    this->Causer = NULL;
    this->Material = NULL;
    this->Vector = EDamageVector::Ranged;
    this->CritLevel = 0;
}

