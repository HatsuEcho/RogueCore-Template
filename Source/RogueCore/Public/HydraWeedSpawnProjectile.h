#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Projectile.h"
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;

    AHydraWeedSpawnProjectile(const FObjectInitializer& ObjectInitializer);

};

