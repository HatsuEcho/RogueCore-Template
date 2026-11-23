#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "Templates/SubclassOf.h"
#include "ProjectileAbilityUpgrade.generated.h"

class AProjectile;
class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UProjectileAbilityUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageBonusBase* DamageScaling;

    UProjectileAbilityUpgrade();

};

