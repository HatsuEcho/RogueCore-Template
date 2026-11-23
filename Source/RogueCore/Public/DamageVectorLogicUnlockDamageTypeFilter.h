#pragma once
#include "CoreMinimal.h"
#include "EDamageTagConditionType.h"
#include "LogicUnlockDamageFilter.h"
#include "DamageVectorLogicUnlockDamageTypeFilter.generated.h"

class UDamageClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UDamageVectorLogicUnlockDamageTypeFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> TypesToCheck;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType ConditionType;

    UDamageVectorLogicUnlockDamageTypeFilter();

};

