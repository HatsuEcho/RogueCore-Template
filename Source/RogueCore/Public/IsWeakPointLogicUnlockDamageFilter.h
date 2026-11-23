#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "IsWeakPointLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UIsWeakPointLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UIsWeakPointLogicUnlockDamageFilter();

};

