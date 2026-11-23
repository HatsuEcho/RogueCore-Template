#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LogicUnlockDamageFilter.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API ULogicUnlockDamageFilter : public UObject {
    GENERATED_BODY()
public:
    ULogicUnlockDamageFilter();

};

