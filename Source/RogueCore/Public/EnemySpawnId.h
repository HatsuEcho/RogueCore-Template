#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnId.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnId {
    GENERATED_BODY()
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
public:
    ROGUECORE_API FEnemySpawnId();
};

