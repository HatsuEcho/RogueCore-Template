#pragma once
#include "CoreMinimal.h"
#include "SaveGameStageSeeds.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameStageSeeds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSeedDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSeedDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSeedDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSeedDepth4;
    
    ROGUECORE_API FSaveGameStageSeeds();
};

