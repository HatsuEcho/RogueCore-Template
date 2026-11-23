#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ItemLogicUnlockComponent.generated.h"

class AItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UItemLogicUnlockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stacks, meta=(AllowPrivateAccess=true))
    TArray<float> Stacks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;

    UItemLogicUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AddStack(float newStack);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValueMultiplied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetModifierValue(float InAmount) const;
    
};

