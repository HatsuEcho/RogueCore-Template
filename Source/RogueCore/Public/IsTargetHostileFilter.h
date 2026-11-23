#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "IsTargetHostileFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UIsTargetHostileFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UIsTargetHostileFilter();

};

