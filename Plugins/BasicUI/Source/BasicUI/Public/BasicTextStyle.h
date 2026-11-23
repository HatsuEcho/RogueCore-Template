#pragma once
#include "CoreMinimal.h"
#include "BasicTextBlockStyle.h"
#include "BasicTextStyle.generated.h"

class UBasicTextStyleAsset;

USTRUCT(BlueprintType)
struct BASICUI_API FBasicTextStyle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBasicTextStyleAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicTextBlockStyle Value;
    
public:
    FBasicTextStyle();
};

