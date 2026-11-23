#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "CarriableInstantUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UCarriableInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UCarriableInstantUsable(const FObjectInitializer& ObjectInitializer);

};

