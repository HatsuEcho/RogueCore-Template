#include "PumpActionShotgun.h"

APumpActionShotgun::APumpActionShotgun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WPN_SpeciallastShotMontage = NULL;
    this->FP_SpeciallastShotMontage = NULL;
    this->TP_SpeciallastShotMontage = NULL;
    this->SpecialLastShotChance = 100.00f;
    this->FireSpecialLastShot = false;
}


