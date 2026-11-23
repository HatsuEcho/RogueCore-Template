#pragma once
#include "CoreMinimal.h"
#include "EBossEnemySpawnSkipReason.generated.h"

UENUM(BlueprintType)
enum class EBossEnemySpawnSkipReason : uint8 {
    MaxAliveReached,
    SavingUp,
    NoSpawnLocation,
    NoEnemies,
};

