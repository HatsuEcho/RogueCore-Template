#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "Types/SlateEnums.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Layout/Margin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PanelSlot -FallbackName=PanelSlot
#include "Components/PanelSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SlateChildSize -FallbackName=SlateChildSize
#include "Components/SlateWrapperTypes.h"
#include "BasicSlot.generated.h"

UCLASS(Blueprintable)
class BASICUI_API UBasicSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateChildSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    UBasicSlot();

};

