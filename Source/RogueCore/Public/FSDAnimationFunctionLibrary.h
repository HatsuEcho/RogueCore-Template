#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDAnimationFunctionLibrary.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDAnimationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static float GetAnimSequenceLength(const UAnimSequence* AnimSequence);
    
};

