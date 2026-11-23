#pragma once
#include "CoreMinimal.h"
#include "BasicColor.h"
#include "BasicRichTextOverrides.generated.h"

USTRUCT(BlueprintType)
struct BASICUI_API FBasicRichTextOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, ScriptName="use_default_font_size_override"))
    bool bOverrideDefaultFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideDefaultFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, ScriptName="use_default_font_color_override"))
    bool bOverrideDefaultFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicColor OverrideDefaultFontColor;
    
    FBasicRichTextOverrides();
};

