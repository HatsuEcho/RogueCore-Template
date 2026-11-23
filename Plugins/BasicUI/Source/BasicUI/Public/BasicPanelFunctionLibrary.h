#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BasicPanelSize.h"
#include "BasicPanelFunctionLibrary.generated.h"

class USizeBox;

UCLASS(Blueprintable)
class UBasicPanelFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBasicPanelFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void ApplySizeBoxSettings(USizeBox* InSizeBox, FBasicPanelSize InSizeSettings);
    
};

