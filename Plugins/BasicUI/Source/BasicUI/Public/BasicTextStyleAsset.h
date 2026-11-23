#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "BasicTextBlockStyle.h"
#include "BasicTextStyleAsset.generated.h"

UCLASS(Blueprintable)
class BASICUI_API UBasicTextStyleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicTextBlockStyle Style;
    
    UBasicTextStyleAsset();

};

