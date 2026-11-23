#include "BXEUnlockCollectionLibrary.h"

UBXEUnlockCollectionLibrary::UBXEUnlockCollectionLibrary() {
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRarityMatchedUnlocksFromTag_Records(UObject* WorldContextObject, const TArray<FBXEUnlockRecord>& InUnlockRecord, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRarityMatchedUnlocksFromTag(UObject* WorldContextObject, const TArray<FBXEUnlockInstance>& InUnlockInstances, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRarityMatchedUnlocksFromCollection_Records(UObject* WorldContextObject, const TArray<FBXEUnlockRecord>& InUnlockRecords, UBXEUnlockCollection* InCollection, FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRarityMatchedUnlocksFromCollection(UObject* WorldContextObject, const TArray<FBXEUnlockInstance>& InUnlockInstances, UBXEUnlockCollection* InCollection, FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRandomUnlocksFromTag(UObject* WorldContextObject, UUnlockCollectionTag* InTag, int32 InCount, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEUnlockCollectionLibrary::PickRandomUnlocksFromCollection(UObject* WorldContextObject, UBXEUnlockCollection* InCollection, FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, int32 InCount, const TArray<UBXEUnlockBase*>& ExcludedUnlocks) {
    return TArray<FBXEUnlockInstance>();
}

TArray<UUnlockCollectionTag*> UBXEUnlockCollectionLibrary::GetAllUnlockCollectionTags() {
    return TArray<UUnlockCollectionTag*>();
}



TArray<UBXEUnlockBase*> UBXEUnlockCollectionLibrary::PickRandomAttributesFromAttributeCollection(UBXEUnlockAttributeWeightPool* Collection, FRandomStream& RandomStream, const int32 count) {
    return TArray<UBXEUnlockBase*>();
}

