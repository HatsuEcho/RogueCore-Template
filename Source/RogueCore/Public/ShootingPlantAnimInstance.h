#pragma once
#include "CoreMinimal.h"
#include "StationaryEnemyAnimInstance.h"
#include "ShootingPlantAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UShootingPlantAnimInstance : public UStationaryEnemyAnimInstance {
    GENERATED_BODY()
public:
    UShootingPlantAnimInstance();

};

