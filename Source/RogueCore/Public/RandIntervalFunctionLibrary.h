#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RandIntegerValue.h"
#include "RandInterval.h"
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URandIntervalFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GenerateValue(const TArray<FRandIntegerValue>& Values, FRandomStream& Stream);
    
};

