#include "CooperAbillityComponent.h"

UCooperAbillityComponent::UCooperAbillityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->StreamClass = NULL;
    this->AbilityData = NULL;
    this->InitializeAtBeginPlay = false;
}

int32 UCooperAbillityComponent::GetMaxCharges(bool Total) const {
    return 0;
}

bool UCooperAbillityComponent::GetIsSet() const {
    return false;
}

int32 UCooperAbillityComponent::GetCharges() const {
    return 0;
}


