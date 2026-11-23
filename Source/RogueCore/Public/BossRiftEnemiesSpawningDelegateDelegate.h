#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "BossRiftEnemiesSpawningDelegateDelegate.generated.h"

class ABossRiftEnemySpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBossRiftEnemiesSpawningDelegate, ABossRiftEnemySpawner*, Spawner, const TArray<FVector>&, Locations, int32, EnemyCount);

