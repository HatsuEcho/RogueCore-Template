#pragma once
#include "CoreMinimal.h"
#include "BasicRichTextSettings.h"
#include "BasicRichTextStyle.generated.h"

class UBasicRichTextStyleAsset;

USTRUCT(BlueprintType)
struct BASICUI_API FBasicRichTextStyle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBasicRichTextStyleAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicRichTextSettings Value;
    
public:
    FBasicRichTextStyle();
};

