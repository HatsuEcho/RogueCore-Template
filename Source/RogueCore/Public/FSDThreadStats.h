#pragma once
#include "CoreMinimal.h"
#include "FSDThreadStats.generated.h"

USTRUCT(BlueprintType)
struct FFSDThreadStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Running;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TaskQueued;
    
    FFSDThreadStats();
};

