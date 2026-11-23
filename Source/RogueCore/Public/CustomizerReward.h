#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "CustomizerReward.generated.h"

class UCustomizationDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCustomizerReward : public UReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizationDataAsset* RewardedCustomization;

    UCustomizerReward();

};

