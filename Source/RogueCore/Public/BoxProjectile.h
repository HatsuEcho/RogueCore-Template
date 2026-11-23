#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "BoxProjectile.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ABoxProjectile : public AProjectile {
    GENERATED_BODY()
public:
    ABoxProjectile(const FObjectInitializer& ObjectInitializer);

};

