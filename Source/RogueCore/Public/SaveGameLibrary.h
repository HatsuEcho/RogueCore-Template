#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SaveGameSnapShot.h"
#include "SaveGameLibrary.generated.h"

class UObject;
class USaveGame;

UCLASS(Blueprintable)
class ROGUECORE_API USaveGameLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveGameLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool TryGetSaveGameSnapShot(UObject* WorldContext, const FString& Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToSlotAtomic(USaveGame* SaveGameObject, const FString& slotName, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetUserSaveGameSlots(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetAllSaveGameSlots();
    
};

