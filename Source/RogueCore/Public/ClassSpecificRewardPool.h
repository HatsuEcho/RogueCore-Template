#pragma once
#include "CoreMinimal.h"
#include "RewardPool.h"
#include "ClassSpecificRewardPool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UClassSpecificRewardPool : public URewardPool {
    GENERATED_BODY()
public:
    UClassSpecificRewardPool();

};

