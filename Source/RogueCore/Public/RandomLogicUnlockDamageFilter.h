#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockDamageFilter.h"
#include "RandomLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API URandomLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LogicValueName;

    URandomLogicUnlockDamageFilter();

};

