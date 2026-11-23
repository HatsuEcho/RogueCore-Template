#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PickaxePartReward.generated.h"

class UPickaxePart;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPickaxePartReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPickaxePart* PicaxePart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedPerClass;

    UPickaxePartReward();

};

