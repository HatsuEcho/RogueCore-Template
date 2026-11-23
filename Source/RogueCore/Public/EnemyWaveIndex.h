#pragma once
#include "CoreMinimal.h"
#include "EnemyWaveIndex.generated.h"

USTRUCT(BlueprintType)
struct FEnemyWaveIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalWaves;
    
    ROGUECORE_API FEnemyWaveIndex();
};

