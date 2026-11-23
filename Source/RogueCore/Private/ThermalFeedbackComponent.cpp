#include "ThermalFeedbackComponent.h"

UThermalFeedbackComponent::UThermalFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = false;
    this->TemperatureThreshold = 50.00f;
    this->RateOfFireMultiplier = 3.00f;
    this->MaxRateOfFire = 20.00f;
    this->OwningWeapon = NULL;
    this->BurstWeapon = NULL;
}

void UThermalFeedbackComponent::OnBurstStateChanged(EChargedBurstState InNewState, EChargedBurstState InOldState) {
}

bool UThermalFeedbackComponent::IsBoostActive() const {
    return false;
}


