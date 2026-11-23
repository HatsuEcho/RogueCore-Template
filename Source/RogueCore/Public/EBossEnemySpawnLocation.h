#pragma once
#include "CoreMinimal.h"
#include "EBossEnemySpawnLocation.generated.h"

UENUM(BlueprintType)
enum class EBossEnemySpawnLocation : uint8 {
    BossRift,
    NearPlayers,
};

