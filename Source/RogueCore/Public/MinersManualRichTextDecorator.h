#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "MinersManualRichTextDecorator.generated.h"

class UMinersManualRichTextToolTip;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UMinersManualRichTextDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMinersManualRichTextToolTip> ToolTipClass;

    UMinersManualRichTextDecorator();

};

