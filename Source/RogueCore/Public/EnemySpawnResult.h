#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnId.h"
#include "EnemySpawnResult.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnId SpawnId;
    
    ROGUECORE_API FEnemySpawnResult();
};

