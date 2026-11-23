#pragma once
#include "CoreMinimal.h"
#include "WeightedUnlockPool.generated.h"

class UBXEUnlockPool;

USTRUCT(BlueprintType)
struct FWeightedUnlockPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockPool* pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FWeightedUnlockPool();
};

