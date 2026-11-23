#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "SeasonXPReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USeasonXPReward : public UReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;

    USeasonXPReward();

};

