#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "FlareGun.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AFlareGun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    AFlareGun(const FObjectInitializer& ObjectInitializer);

};

