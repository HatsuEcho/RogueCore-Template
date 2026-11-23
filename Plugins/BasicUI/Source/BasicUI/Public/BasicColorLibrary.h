#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "Styling/SlateColor.h"
#include "BasicColor.h"
#include "BasicColorLibrary.generated.h"

class UBasicColorAsset;

UCLASS(Blueprintable)
class UBasicColorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBasicColorLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBasicColor LinearToBasicColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateColor BasicToSlateColor(const FBasicColor& InBasicColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor BasicToLinearColor(const FBasicColor& InBasicColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor AssetToLinearColor(UBasicColorAsset* InReferenceColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBasicColor AssetToBasicColor(UBasicColorAsset* InReferenceColor);
    
};

