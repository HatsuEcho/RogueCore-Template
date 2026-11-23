#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "TargetIsStunnedLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTargetIsStunnedLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UTargetIsStunnedLogicUnlockDamageFilter();

};

