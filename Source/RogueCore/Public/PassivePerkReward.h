#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PassivePerkReward.generated.h"

class UPerkAsset;

UCLASS(Blueprintable, EditInlineNew)
class UPassivePerkReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* Perk;
    
public:
    UPassivePerkReward();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkAsset* GetPerk() const;
    
};

