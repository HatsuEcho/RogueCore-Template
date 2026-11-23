#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "ArmorDamageEffects.h"
#include "ArmorShatterDelegateDelegate.h"
#include "DamageRelevant.h"
#include "BaseArmorDamageComponent.generated.h"

class UFSDPhysicalMaterial;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBaseArmorDamageComponent : public UActorComponent, public IDamageRelevant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ArmorDamageEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorShatterDelegate OnArmorShatteredEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorDamageEffects ArmorBreakEffects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> ArmorPhysMats;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mesh;

    UBaseArmorDamageComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorRemoved, meta=(AllowPrivateAccess=true))
    bool ArmorRemoved;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveArmor();

    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorRemoved();

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

