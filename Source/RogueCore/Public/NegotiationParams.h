#pragma once
#include "CoreMinimal.h"
#include "NegotiationParams.generated.h"

class UBXEUnlockCategory;


class UBXEUnlockCollection;
class UUnlockCollectionTag;
class UWorld;

USTRUCT(BlueprintType)
struct FNegotiationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* CollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* RewardPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextID;
    
    ROGUECORE_API FNegotiationParams();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBXEUnlockCategory*, int32> PlayerCategoryCounts;

};

