#pragma once
#include "CoreMinimal.h"
#include "StunParameters.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FStunParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* SourcePlayer;
    
    ROGUECORE_API FStunParameters();
};

