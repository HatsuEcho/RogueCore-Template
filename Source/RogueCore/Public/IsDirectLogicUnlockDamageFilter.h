#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "IsDirectLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UIsDirectLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UIsDirectLogicUnlockDamageFilter();

};

