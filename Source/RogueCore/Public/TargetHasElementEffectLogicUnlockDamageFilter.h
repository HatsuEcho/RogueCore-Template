#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "TargetHasElementEffectLogicUnlockDamageFilter.generated.h"

class UElementEventType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTargetHasElementEffectLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* ElementType;

    UTargetHasElementEffectLogicUnlockDamageFilter();

};

