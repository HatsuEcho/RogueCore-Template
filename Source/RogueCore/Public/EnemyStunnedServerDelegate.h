#pragma once
#include "CoreMinimal.h"
#include "EnemyStunnedServerDelegate.generated.h"

class ADeepPathfinderCharacter;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyStunnedServer, APlayerCharacter*, Causer, ADeepPathfinderCharacter*, Enemy);

