#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "EnhancementReward.generated.h"

class UPerkAsset;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UEnhancementReward : public UUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* Perk;

    UEnhancementReward();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkAsset* GetPerk() const;
    
};

