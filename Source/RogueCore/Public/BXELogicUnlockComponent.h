#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "DamageListener.h"
#include "LogicUnlockValue.h"
#include "LogicUnlockComponentStack.h"
#include "BXELogicUnlockComponent.generated.h"

class APlayerCharacter;
class ULogicUnlockDamageFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXELogicUnlockComponent : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 AmountOfStacks;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLogicUnlockValue> LogicValues;

protected:
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DamageListenerProfile;
    
    
    
    
public:
    UBXELogicUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_InitializeUnlockLogic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ClearUnlockForDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AddStack(float newStack);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Stacks();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValueMultiplied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValue() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogicUnlockValue> DefaultLogicValues;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULogicUnlockDamageFilter* DamageListenerFilter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerBlueprintEvents;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stacks, meta=(AllowPrivateAccess=true))
    TArray<float> Stacks;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLogicValueByName(const FString& Name) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClampedUpgradeValue(float Previous) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfStacks() const;
    
    UFUNCTION(BlueprintCallable)
    void AddStack();
    

    // Fix for true pure virtual functions not being implemented
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTriggerCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LogicStack, meta=(AllowPrivateAccess=true))
    FLogicUnlockComponentStack LogicStack;

    UFUNCTION(BlueprintCallable)
    void RemoveStack();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStacksChanged();

    UFUNCTION(BlueprintCallable)
    void OnRep_LogicStack();

};

