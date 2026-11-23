#include "BXEUnlockInstanceLibrary.h"

UBXEUnlockInstanceLibrary::UBXEUnlockInstanceLibrary() {
}

TArray<UBioBoosterDeck*> UBXEUnlockInstanceLibrary::SortBioBoosterDecks(const TArray<UBioBoosterDeck*>& DecksToSort, const UPlayerCharacterID* CharacterToMoveToTop) {
    return TArray<UBioBoosterDeck*>();
}

void UBXEUnlockInstanceLibrary::PlayUnlockInstanceSelectedSound2D(const UObject* WorldContext, const FBXEUnlockInstance& UnlockInstance) {
}

TArray<UBXEUnlockBase*> UBXEUnlockInstanceLibrary::GetUnlocksFromUnlockRecords(const TArray<FBXEUnlockRecord>& UnlockRecords) {
    return TArray<UBXEUnlockBase*>();
}

TArray<UBXEUnlockBase*> UBXEUnlockInstanceLibrary::GetUnlocksFromUnlockInstances(const TArray<FBXEUnlockInstance>& UnlockInstances) {
    return TArray<UBXEUnlockBase*>();
}

TArray<FBXEUnlockRecord> UBXEUnlockInstanceLibrary::GetUnlockRecordsOfType(const TArray<FBXEUnlockRecord>& UnlockRecords, const EUnlockType Type) {
    return TArray<FBXEUnlockRecord>();
}

UUnlockVisualSettings* UBXEUnlockInstanceLibrary::GetUnlockInstanceVisualSettings(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}

EUnlockType UBXEUnlockInstanceLibrary::GetUnlockInstanceType(const FBXEUnlockInstance& UnlockInstance) {
    return EUnlockType::None;
}

TArray<FBXEUnlockInstance> UBXEUnlockInstanceLibrary::GetUnlockInstancesOfType(const TArray<FBXEUnlockInstance>& UnlockInstances, const EUnlockType Type) {
    return TArray<FBXEUnlockInstance>();
}

UBXEUnlockRarity* UBXEUnlockInstanceLibrary::GetUnlockInstanceRarity(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}



bool UBXEUnlockInstanceLibrary::IsUnlockValid(const FBXEUnlockInstance& Unlock) {
    return false;
}

FText UBXEUnlockInstanceLibrary::GetUnlockInstanceTitle(const FBXEUnlockInstance& UnlockInstance) {
    return FText::GetEmpty();
}

FText UBXEUnlockInstanceLibrary::GetUnlockInstanceRarityTitle(const FBXEUnlockInstance& UnlockInstance) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UBXEUnlockInstanceLibrary::GetUnlockInstanceIcon(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}

TArray<UBXEUnlockCategory*> UBXEUnlockInstanceLibrary::GetUnlockInstanceCategories(const FBXEUnlockInstance& UnlockInstance) {
    return TArray<UBXEUnlockCategory*>();
}

FText UBXEUnlockInstanceLibrary::GetUnlockCategoriesRichText(const TArray<UBXEUnlockCategory*>& Categories) {
    return FText::GetEmpty();
}

TArray<UBXEUnlockBase*> UBXEUnlockInstanceLibrary::GetBundledUnlocks(const FBXEUnlockInstance& UnlockInstance) {
    return TArray<UBXEUnlockBase*>();
}

TArray<FBXEUnlockInstance> UBXEUnlockInstanceLibrary::GetBundledUnlockInstances(const FBXEUnlockInstance& UnlockInstance) {
    return TArray<FBXEUnlockInstance>();
}

UBioBoosterDeck* UBXEUnlockInstanceLibrary::FindBioBoosterDeckForUnlockInstance(const FBXEUnlockInstance& UnlockInstance) {
    return NULL;
}

UBioBoosterDeck* UBXEUnlockInstanceLibrary::FindBioBoosterDeckForUnlock(const UBXEUnlockBase* Unlock) {
    return NULL;
}

bool UBXEUnlockInstanceLibrary::AreUnlocksEqual(const FBXEUnlockInstance& A, const FBXEUnlockInstance& B) {
    return false;
}

