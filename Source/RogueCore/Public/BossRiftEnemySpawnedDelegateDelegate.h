#pragma once
#include "CoreMinimal.h"
#include "BossRiftEnemySpawnedDelegateDelegate.generated.h"

class ABossRiftEnemySpawner;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossRiftEnemySpawnedDelegate, ABossRiftEnemySpawner*, Spawner, APawn*, Enemy);

