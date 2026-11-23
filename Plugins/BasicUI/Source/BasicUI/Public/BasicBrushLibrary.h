#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Styling/SlateBrush.h"
#include "BasicBrush.h"
#include "BasicBrushLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBasicBrushLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBasicBrushLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FSlateBrush BasicToSlateBrush(UObject* WorldContext, const FBasicBrush& InBasicBrush);
    
};

