#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BoilStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBoilStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UBoilStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

