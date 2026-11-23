#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ERunHazard.h"
#include "DifficultyLibrary.generated.h"

class UDifficultySetting;

UCLASS(Blueprintable)
class ROGUECORE_API UDifficultyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDifficultyLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDifficultySetting* GetDifficultyForHazard(const ERunHazard Hazard);
    
};

