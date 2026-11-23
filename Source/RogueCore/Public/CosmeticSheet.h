#pragma once
#include "CoreMinimal.h"
#include "RewardTree.h"
#include "CosmeticSheet.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCosmeticSheet : public URewardTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* CosmeticToken;

public:
    UCosmeticSheet();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResourceData* GetCosmeticToken() const;
    
};

