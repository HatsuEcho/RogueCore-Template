#pragma once
#include "CoreMinimal.h"
#include "BasicTextStyle.h"
#include "Templates/SubclassOf.h"
#include "BasicRichTextSettings.generated.h"

class URichTextBlockDecorator;

USTRUCT(BlueprintType)
struct BASICUI_API FBasicRichTextSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicTextStyle DefaultTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBasicTextStyle> RichTextStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;
    
    FBasicRichTextSettings();
};

