#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "UnlockRerollSettings.h"
#include "UnlockRerollHealthBoostRequest.generated.h"

USTRUCT(BlueprintType)
struct FUnlockRerollHealthBoostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance NewUnlock;
    
    ROGUECORE_API FUnlockRerollHealthBoostRequest();
};

