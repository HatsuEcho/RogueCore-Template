#pragma once
#include "CoreMinimal.h"
#include "EDamageTagConditionType.h"
#include "EDamageVector.h"
#include "LogicUnlockDamageFilter.h"
#include "DamageVectorLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UDamageVectorLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageVector> DamageVectors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType ConditionType;

    UDamageVectorLogicUnlockDamageFilter();

};

