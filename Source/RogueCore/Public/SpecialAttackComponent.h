#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "DelegateDelegate.h"
#include "NameDelegateDelegate.h"
#include "ActiveAttackMontage.h"
#include "SpecialAttackComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USpecialAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameDelegate OnAttackActionNotify;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnMontageInterrupted;

    USpecialAttackComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerAttack(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnPerformAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnAborted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFrozen(bool IsFrozen);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveAttackMontage ActiveMontage;

};

