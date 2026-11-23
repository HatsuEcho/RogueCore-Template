#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "ControlEnemyUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UControlEnemyUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UControlEnemyUsable(const FObjectInitializer& ObjectInitializer);

};

