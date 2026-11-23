#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "IsKillLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UIsKillLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UIsKillLogicUnlockDamageFilter();

};

