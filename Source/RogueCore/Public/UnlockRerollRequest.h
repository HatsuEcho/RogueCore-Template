#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "UnlockRerollSettings.h"
#include "UnlockRerollRequest.generated.h"

USTRUCT(BlueprintType)
struct FUnlockRerollRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance Replacement;
    
    ROGUECORE_API FUnlockRerollRequest();
};

