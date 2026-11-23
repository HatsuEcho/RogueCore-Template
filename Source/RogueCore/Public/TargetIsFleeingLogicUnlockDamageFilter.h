#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "TargetIsFleeingLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTargetIsFleeingLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UTargetIsFleeingLogicUnlockDamageFilter();

};

