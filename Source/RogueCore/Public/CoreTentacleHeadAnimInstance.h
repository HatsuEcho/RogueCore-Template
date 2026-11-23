#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CoreTentacleHeadAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ROGUECORE_API UCoreTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Searching;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MeleeAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RangedAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GrabAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GrabShake;

    UCoreTentacleHeadAnimInstance();

};

