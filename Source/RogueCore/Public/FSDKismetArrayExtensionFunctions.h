#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatSpringState -FallbackName=FloatSpringState
#include "Kismet/KismetMathLibrary.h"
#include "Animation/AnimationAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KismetArrayLibrary -FallbackName=KismetArrayLibrary
#include "Kismet/KismetArrayLibrary.h"
#include "FSDKismetArrayExtensionFunctions.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary {
    GENERATED_BODY()
public:
    UFSDKismetArrayExtensionFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFloatSpringSettled(FFloatSpringState InFloatSpringState, float InCurrentValue, float InTargetValue, float InPositionTolerance, float InVelocityTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
    
};

