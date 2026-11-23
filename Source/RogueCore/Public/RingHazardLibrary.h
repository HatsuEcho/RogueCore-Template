#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RingHazardLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URingHazardLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URingHazardLibrary();

};

