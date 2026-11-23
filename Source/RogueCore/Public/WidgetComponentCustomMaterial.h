#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "WidgetComponentCustomMaterial.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UWidgetComponentCustomMaterial : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomMaterial;

public:
    UWidgetComponentCustomMaterial(const FObjectInitializer& ObjectInitializer);

};

