#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponent -FallbackName=SplineMeshComponent
#include "Components/SplineMeshComponent.h"
#include "PipelineSegmentMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPipelineSegmentMeshComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
    UPipelineSegmentMeshComponent(const FObjectInitializer& ObjectInitializer);

};

