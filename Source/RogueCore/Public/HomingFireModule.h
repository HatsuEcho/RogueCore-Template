#pragma once
#include "CoreMinimal.h"
#include "HostileTargetingGuntowerModule.h"
#include "Templates/SubclassOf.h"
#include "HomingFireModule.generated.h"

class AProjectile;

UCLASS(Blueprintable)
class ROGUECORE_API AHomingFireModule : public AHostileTargetingGuntowerModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootDroneSocket;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> HomingProjectileClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenShots;

    AHomingFireModule(const FObjectInitializer& ObjectInitializer);

};

