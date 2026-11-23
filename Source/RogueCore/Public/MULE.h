#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeepPathfinderCharacter.h"
#include "MULE.generated.h"

class UHealthComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AMULE : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDown, meta=(AllowPrivateAccess=true))
    bool IsDown;

    AMULE(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsDown(bool NewIsDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlledByDropShip(bool Control);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_IsDown();
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

