#pragma once
#include "CoreMinimal.h"
#include "ECatchUpNegotiationResult.h"
#include "CatchUpNegotiation.generated.h"

class UUnlockCollectionTag;

USTRUCT(BlueprintType)
struct FCatchUpNegotiation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* CollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatchUpNegotiationResult Result;
    
    ROGUECORE_API FCatchUpNegotiation();
};

