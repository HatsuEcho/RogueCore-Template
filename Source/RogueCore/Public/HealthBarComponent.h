#pragma once
#include "CoreMinimal.h"
#include "WidgetComponentCustomMaterial.h"
#include "HealthBarComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UHealthBarComponent : public UWidgetComponentCustomMaterial {
    GENERATED_BODY()
public:
    UHealthBarComponent(const FObjectInitializer& ObjectInitializer);

};

