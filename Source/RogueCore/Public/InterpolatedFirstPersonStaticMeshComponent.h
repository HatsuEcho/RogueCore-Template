#pragma once
#include "CoreMinimal.h"
#include "FirstPersonStaticMeshComponent.h"
#include "InterpolatedFirstPersonStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UInterpolatedFirstPersonStaticMeshComponent : public UFirstPersonStaticMeshComponent {
    GENERATED_BODY()
public:
    UInterpolatedFirstPersonStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

