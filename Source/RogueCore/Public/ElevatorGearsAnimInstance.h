#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ElevatorGearsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UElevatorGearsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;

    UElevatorGearsAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsMoving(bool Moving);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
};

