#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "SpecialEventUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USpecialEventUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    USpecialEventUsableComponent(const FObjectInitializer& ObjectInitializer);

};

