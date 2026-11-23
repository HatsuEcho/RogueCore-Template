#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FacilityTentacleHeadAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFacilityTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Searching;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Melee;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RangedAttack;

    UFacilityTentacleHeadAnimInstance();

};

