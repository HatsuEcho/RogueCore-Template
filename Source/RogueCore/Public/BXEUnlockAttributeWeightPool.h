#pragma once
#include "CoreMinimal.h"
#include "AttributeWeightPoolUnlock.h"
#include "BXEUnlockCollection.h"
#include "BXEUnlockAttributeWeightPool.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockAttributeWeightPool : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeWeightPoolUnlock> Unlocks;

    UBXEUnlockAttributeWeightPool();

};

