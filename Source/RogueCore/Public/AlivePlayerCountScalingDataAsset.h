#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PlayerCountModifierTable.h"
#include "AlivePlayerCountScalingDataAsset.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UAlivePlayerCountScalingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCountModifierTable EnemyCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCountModifierTable AttackCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCountModifierTable Speed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCountModifierTable ProjectileSpeed;

    UAlivePlayerCountScalingDataAsset();

};

