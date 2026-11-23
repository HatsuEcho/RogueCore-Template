#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "GraphicsLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UGraphicsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGraphicsLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void WaitForPipelineStateCompilation(const FLatentActionInfo LatentInfo, const UObject* WorldContext, const float MaximumWaitTimeInSeconds);
    
};

