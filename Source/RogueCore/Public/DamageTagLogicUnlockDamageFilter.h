#pragma once
#include "CoreMinimal.h"
#include "EDamageTagConditionType.h"
#include "LogicUnlockDamageFilter.h"
#include "DamageTagLogicUnlockDamageFilter.generated.h"

class UDamageTag;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UDamageTagLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType Type;

    UDamageTagLogicUnlockDamageFilter();

};

