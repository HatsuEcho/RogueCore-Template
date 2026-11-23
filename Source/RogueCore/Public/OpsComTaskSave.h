#pragma once
#include "CoreMinimal.h"
#include "OpsComTaskTierCounter.h"
#include "OpsComTaskSave.generated.h"

USTRUCT(BlueprintType)
struct FOpsComTaskSave {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpsComTaskTierCounter> TaskTierCounters;
    
public:
    FOpsComTaskSave();
};

