#include "AbilityData.h"

UAbilityData::UAbilityData() {
    this->ID = NULL;
    this->AbilityWidgetOverride = NULL;
    this->PreviewImage = NULL;
    this->AbilityFailedShout = NULL;
    this->AbilityUpgrades = NULL;
}

TArray<UBXEUnlockBase*> UAbilityData::GetOwnedAbilityUpgrades(AFSDPlayerState* InPlayerState) const {
    return TArray<UBXEUnlockBase*>();
}


