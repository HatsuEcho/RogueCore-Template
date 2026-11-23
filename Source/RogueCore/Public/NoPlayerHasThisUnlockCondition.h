#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "NoPlayerHasThisUnlockCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UNoPlayerHasThisUnlockCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UNoPlayerHasThisUnlockCondition();

};

