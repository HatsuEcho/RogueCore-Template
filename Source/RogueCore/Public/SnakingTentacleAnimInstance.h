#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ESnakingTentacleState.h"
#include "SnakingTentacleAnimInstance.generated.h"

class ASnakingCoreTentacle;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API USnakingTentacleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASnakingCoreTentacle> Tentacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HorizontalLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VerticalLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartReachingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishReachingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReachingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESnakingTentacleState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HoldingTarget;
    
    USnakingTentacleAnimInstance();

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ToTunneling() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ToThrashing() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ToStunned() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ToJailing() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MissedDwarf() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LeaveTunneling() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LeaveThrashing() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LeaveStunned() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LeaveAnticipation() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GoToAnticipation() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EndAttack() const;

};

