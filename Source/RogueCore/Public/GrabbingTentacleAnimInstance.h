#pragma once
#include "CoreMinimal.h"
#include "EGrabbingTentacleState.h"
#include "EnemyAnimInstance.h"
#include "GrabbingTentacleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGrabbingTentacleAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGrabbingTentacleState State;
    
public:
    UGrabbingTentacleAnimInstance();

};

