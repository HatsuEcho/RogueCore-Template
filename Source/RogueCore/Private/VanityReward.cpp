#include "VanityReward.h"

UVanityReward::UVanityReward() {
    this->VanityItem = NULL;
    this->UnlockedPerClass = true;
    this->UsePerClassVanityItems = false;
    this->OptionalCharacterID = NULL;
}

UVanityItem* UVanityReward::GetVanityItem(const UPlayerCharacterID* InPlayerCharacterID) const {
    return NULL;
}


