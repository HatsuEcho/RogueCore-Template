#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CSGBuilderBaseSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECOREENGINE_API UCSGBuilderBaseSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCSGBuilderBaseSceneComponent(const FObjectInitializer& ObjectInitializer);

};

