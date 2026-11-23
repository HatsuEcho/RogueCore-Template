#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "LoadingScreenLibrary.generated.h"

UCLASS(Blueprintable)
class LOADINGSCREEN_API ULoadingScreenLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULoadingScreenLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetupLoadingScreenForOpenMap(const FSlateBrush& LoadingImage, const FSlateBrush& SpinnerImage, const float EstimatedLoadTime);
    
};

