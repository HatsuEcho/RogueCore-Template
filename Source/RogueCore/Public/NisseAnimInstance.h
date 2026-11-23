#pragma once
#include "CoreMinimal.h"
#include "ENisseState.h"
#include "SimpleMovingEnemyAnimInstance.h"
#include "NisseAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UNisseAnimInstance : public USimpleMovingEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ENisseState State;

    UNisseAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrozen() const;
    
};

