#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGGroupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECOREENGINE_API UCSGGroupComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UCSGGroupComponent(const FObjectInitializer& ObjectInitializer);

};

