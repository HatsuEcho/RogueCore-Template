#pragma once
#include "CoreMinimal.h"
#include "ERunDifficulty.h"
#include "Reward.h"
#include "UnlockRunDifficultyReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUnlockRunDifficultyReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDifficulty RunDifficulty;
    
public:
    UUnlockRunDifficultyReward();

};

