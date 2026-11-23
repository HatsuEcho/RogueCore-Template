#pragma once
#include "CoreMinimal.h"
#include "UnlockRerollSettings.h"
#include "UnlockRerollSetup.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FUnlockRerollSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollSettings Settings;
    
    ROGUECORE_API FUnlockRerollSetup();
};

