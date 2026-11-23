#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LoadoutCopy.h"
#include "LoadoutGearSection.h"
#include "LoadoutPickaxeSection.h"
#include "LoadoutVanitySection.h"
#include "LoadoutFunctionLibrary.generated.h"

class APlayerCharacter;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class ROGUECORE_API ULoadoutFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULoadoutFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVanitySection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutVanitySection& Section);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPickaxeSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutPickaxeSection& Section);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGearSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutGearSection& Section);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, FLoadoutCopy newLoadout);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RandomizeWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeAllRandomWeaponLoadout(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLoadoutVanitySection GetVanitySection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLoadoutPickaxeSection GetPickaxeSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLoadoutGearSection GetGearSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLoadoutCopy GetCurrentLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyPasteWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyLoadoutSections(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex, int32 Sections);
    
};

