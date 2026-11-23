#pragma once
#include "CoreMinimal.h"
#include "StunState.generated.h"

USTRUCT(BlueprintType)
struct FStunState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Strength;
    
    ROGUECORE_API FStunState();
};

