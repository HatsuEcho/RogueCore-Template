#pragma once
#include "CoreMinimal.h"
#include "EGameOwnerStatus.h"
#include "Reward.h"
#include "GameOwnerStatusReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UGameOwnerStatusReward : public UReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOwnerStatus RewardedGameOwnerStatus;

    UGameOwnerStatusReward();

};

