#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BXEUnlockInstance.h"
#include "BXEUnlockRecord.h"
#include "BXEUnlockCollectionLibrary.generated.h"

class UBXEUnlockAttributeWeightPool;


class UBXEUnlockBase;
class UBXEUnlockCollection;
class UObject;
class UUnlockCollectionTag;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBXEUnlockCollectionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRarityMatchedUnlocksFromTag_Records(UObject* WorldContextObject, const TArray<FBXEUnlockRecord>& InUnlockRecord, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRarityMatchedUnlocksFromTag(UObject* WorldContextObject, const TArray<FBXEUnlockInstance>& InUnlockInstances, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRarityMatchedUnlocksFromCollection_Records(UObject* WorldContextObject, const TArray<FBXEUnlockRecord>& InUnlockRecords, UBXEUnlockCollection* InCollection, UPARAM(Ref) FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRarityMatchedUnlocksFromCollection(UObject* WorldContextObject, const TArray<FBXEUnlockInstance>& InUnlockInstances, UBXEUnlockCollection* InCollection, UPARAM(Ref) FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRandomUnlocksFromTag(UObject* WorldContextObject, UUnlockCollectionTag* InTag, int32 InCount, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRandomUnlocksFromCollection(UObject* WorldContextObject, UBXEUnlockCollection* InCollection, UPARAM(Ref) FRandomStream& InRandomStream, UUnlockCollectionTag* InTag, int32 InCount, const TArray<UBXEUnlockBase*>& ExcludedUnlocks);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUnlockCollectionTag*> GetAllUnlockCollectionTags();
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<UBXEUnlockBase*> PickRandomAttributesFromAttributeCollection(UBXEUnlockAttributeWeightPool* Collection, UPARAM(Ref) FRandomStream& RandomStream, const int32 count);

};

