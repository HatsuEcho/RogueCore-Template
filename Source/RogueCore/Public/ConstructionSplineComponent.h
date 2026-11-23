#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "ConstructionSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UConstructionSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UConstructionSplineComponent(const FObjectInitializer& ObjectInitializer);

};

