#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "ActivityCardReward.generated.h"

class UGameActivityType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UActivityCardReward : public UReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameActivityType* Activity;

    UActivityCardReward();

};

