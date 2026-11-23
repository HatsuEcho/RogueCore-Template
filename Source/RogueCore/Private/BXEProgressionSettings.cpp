#include "BXEProgressionSettings.h"

UBXEProgressionSettings::UBXEProgressionSettings() {
    this->StartInventory = NULL;
    this->SoloDroneCollection = NULL;
    this->EnableBiasTowardsPlayerPickedCategories = true;
    this->CategoryBiasPerPlayerPickedUnlock = 0.50f;
    this->CategoryBiasPerPlayerPickedUnlockMaxWeight = 5.00f;
}


