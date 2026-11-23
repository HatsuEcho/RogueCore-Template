#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "ERunDepth.h"
#include "UnlockMutatedRunsReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUnlockMutatedRunsReward : public UReward {
    GENERATED_BODY()
public:
    UUnlockMutatedRunsReward();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RunDepth;

};

