#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "EGameModeAvailability.h"
#include "GameModeAvailabilityCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UGameModeAvailabilityCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeAvailability GameModeAvailability;

    UGameModeAvailabilityCondition();

};

