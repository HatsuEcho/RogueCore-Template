#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RarityFunctionLibrary.generated.h"

class UBXEUnlockRarity;

UCLASS(Blueprintable)
class ROGUECORE_API URarityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URarityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetAllRarities(TArray<UBXEUnlockRarity*>& OutRarities);
    
};

