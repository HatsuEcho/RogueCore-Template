#pragma once
#include "CoreMinimal.h"
#include "CooperAbillity.h"
#include "Templates/SubclassOf.h"
#include "CooperProjectileAbillity.generated.h"

class AProjectile;

UCLASS(Blueprintable)
class ROGUECORE_API UCooperProjectileAbillity : public UCooperAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UCooperProjectileAbillity();

};

