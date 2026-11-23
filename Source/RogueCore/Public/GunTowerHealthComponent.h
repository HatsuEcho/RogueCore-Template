#pragma once
#include "CoreMinimal.h"
#include "EnemyHealthComponent.h"
#include "GunTowerHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UGunTowerHealthComponent : public UEnemyHealthComponent {
    GENERATED_BODY()
public:
    UGunTowerHealthComponent(const FObjectInitializer& ObjectInitializer);

};

