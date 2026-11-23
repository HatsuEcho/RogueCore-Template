#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ElementLibrary.generated.h"

class UElementComponent;
class UElementType;

UCLASS(Blueprintable)
class ROGUECORE_API UElementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UElementLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UElementComponent*> CollectTetheredElementComponents(UElementComponent* TetheredTo, const UElementType* ElementType);
    
};

