#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "IsCriticalHitLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UIsCriticalHitLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UIsCriticalHitLogicUnlockDamageFilter();

};

