#pragma once
#include "CoreMinimal.h"
#include "MontageRotationBank.generated.h"

USTRUCT(BlueprintType)
struct FMontageRotationBank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 count;
    
    ROGUECORE_API FMontageRotationBank();
};

