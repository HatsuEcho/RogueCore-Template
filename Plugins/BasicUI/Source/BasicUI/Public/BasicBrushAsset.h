#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "SlateBrushFactory.h"
#include "BasicBrushAsset.generated.h"

UCLASS(Blueprintable)
class BASICUI_API UBasicBrushAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrushFactory Brush;
    
public:
    UBasicBrushAsset();

};

