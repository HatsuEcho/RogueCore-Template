#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Styling/SlateBrush.h"
#include "BasicColor.h"
#include "BasicMaterialParameters.h"
#include "SlateBrushFactory.generated.h"

USTRUCT(BlueprintType)
struct BASICUI_API FSlateBrushFactory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SlateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicColor BasicTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicMaterialParameters MaterialParameters;
    
public:
    FSlateBrushFactory();
};

