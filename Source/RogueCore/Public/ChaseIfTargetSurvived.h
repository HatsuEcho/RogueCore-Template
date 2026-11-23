#pragma once
#include "CoreMinimal.h"
#include "StandardExitStrategy.h"
#include "ChaseIfTargetSurvived.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UChaseIfTargetSurvived : public UStandardExitStrategy {
    GENERATED_BODY()
public:
    UChaseIfTargetSurvived();

};

