#pragma once
#include "CoreMinimal.h"
#include "BossRiskVectorSignal.generated.h"

USTRUCT(BlueprintType)
struct FBossRiskVectorSignal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Signal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ROGUECORE_API FBossRiskVectorSignal();
};

