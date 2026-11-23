#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PureTextReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPureTextReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;

    UPureTextReward();

};

