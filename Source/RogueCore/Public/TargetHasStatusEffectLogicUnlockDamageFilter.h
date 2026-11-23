#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "TargetHasStatusEffectLogicUnlockDamageFilter.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTargetHasStatusEffectLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UStatusEffect>> StatusEffects;

    UTargetHasStatusEffectLogicUnlockDamageFilter();

};

