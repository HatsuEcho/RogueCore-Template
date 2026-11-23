#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "BXETradeGift.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FBXETradeGift {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance Unlock;
    
    ROGUECORE_API FBXETradeGift();
};

