#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "AscensionReward.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UAscensionReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;

    UAscensionReward();

};

