#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "EMultiConditionComparison.h"
#include "UnlockMultiCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UUnlockMultiCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMultiConditionComparison Comparison;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockConditionBase*> Conditions;

    UUnlockMultiCondition();

};

