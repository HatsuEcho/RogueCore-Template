#include "BioBoosterDeck.h"

UBioBoosterDeck::UBioBoosterDeck() {
    this->BelongsToClass = NULL;
    this->Icon = NULL;
    this->UnlocksAtLevel = 0;
}

TArray<FRewardDispenserReward> UBioBoosterDeck::GetRandomRewardUnlocks(int32 InCount, UWorld* Context, FRandomStream& InRandomStream) {
    return TArray<FRewardDispenserReward>();
}

UPlayerCharacterID* UBioBoosterDeck::GetBelongsToClass() const {
    return NULL;
}



bool UBioBoosterDeck::IsCharacterLevelUnlocked(const UFSDSaveGame* save) const {
    return false;
}

int32 UBioBoosterDeck::GetUnlocksAtLevel() const {
    return 0;
}

FText UBioBoosterDeck::GetDeckName() const {
    return FText::GetEmpty();
}

UTexture2D* UBioBoosterDeck::GetDeckIcon() const {
    return NULL;
}

TArray<UBXEUnlockBase*> UBioBoosterDeck::GetCardUnlocks() const {
    return TArray<UBXEUnlockBase*>();
}

UPlayerCharacterData* UBioBoosterDeck::GetBelongsToCharacterData() const {
    return NULL;
}

