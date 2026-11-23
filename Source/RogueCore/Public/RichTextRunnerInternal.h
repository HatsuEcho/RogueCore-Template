#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "Styling/SlateTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "Components/RichTextBlock.h"
#include "RichTextRunnerInternal.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URichTextRunnerInternal : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextBlockStyle> CachedTextStyles;

    URichTextRunnerInternal();

};

