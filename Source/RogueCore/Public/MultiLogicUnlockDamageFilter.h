#pragma once
#include "CoreMinimal.h"
#include "EDamagelistenerMultiFilterType.h"
#include "LogicUnlockDamageFilter.h"
#include "MultiLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UMultiLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULogicUnlockDamageFilter*> Filters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamagelistenerMultiFilterType Type;

    UMultiLogicUnlockDamageFilter();

};

