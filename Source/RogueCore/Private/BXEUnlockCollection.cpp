#include "BXEUnlockCollection.h"

UBXEUnlockCollection::UBXEUnlockCollection() {
    this->RarityWeightType = ERarityWeightType::Default;
    this->bProgressiveCollection = false;
    this->NegotiationCompleteStat = NULL;
    this->AddDroneUnlocks = false;
}

ERarityWeightType UBXEUnlockCollection::GetRarityWeightType() const {
    return ERarityWeightType::Default;
}

void UBXEUnlockCollection::GetAllUnlocks(TSet<UBXEUnlockBase*>& OutAllUnlocks) const {
}


