#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "UnlockRerollHealthBoostResponse.generated.h"

USTRUCT(BlueprintType)
struct FUnlockRerollHealthBoostResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance NewUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    ROGUECORE_API FUnlockRerollHealthBoostResponse();
};

