#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "DamageInstance.h"
#include "TimeRewindExplosionUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTimeRewindExplosionUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StunDurationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RadiusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance Damage;
    
    UTimeRewindExplosionUpgrade();

};

