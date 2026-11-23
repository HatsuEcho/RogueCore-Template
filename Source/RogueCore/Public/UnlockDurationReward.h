#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockDurationReward.generated.h"

class UStageDuration;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUnlockDurationReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* Duration;

    UUnlockDurationReward();

};

