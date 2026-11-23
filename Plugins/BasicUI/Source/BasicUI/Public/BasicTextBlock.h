#pragma once
#include "CoreMinimal.h"
#include "BasicTextLayoutBlock.h"
#include "BasicTextStyle.h"
#include "BasicTextBlock.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BASICUI_API UBasicTextBlock : public UBasicTextLayoutBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicTextStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InnerTextBlock;
    
public:
    UBasicTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextStyle(FBasicTextStyle InStyle);
    
};

