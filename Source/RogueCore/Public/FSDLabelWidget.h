#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextWrappingPolicy -FallbackName=ETextWrappingPolicy
#include "Styling/SlateTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Layout/Margin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "Components/TextBlock.h"
#include "FSDLabelWidget.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDLabelWidget : public UTextBlock {
    GENERATED_BODY()
public:
    UFSDLabelWidget();

    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float WrapAt);
    
    UFUNCTION(BlueprintCallable)
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin NewMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFontSize() const;
    
};

