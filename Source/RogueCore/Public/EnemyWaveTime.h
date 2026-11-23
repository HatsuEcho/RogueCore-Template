#pragma once
#include "CoreMinimal.h"
#include "EnemyWaveTime.generated.h"

USTRUCT(BlueprintType)
struct FEnemyWaveTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveCount;
    
    ROGUECORE_API FEnemyWaveTime();
};

