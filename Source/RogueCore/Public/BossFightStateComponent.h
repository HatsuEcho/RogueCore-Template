#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "BossFightImmunityChangedDelegateDelegate.h"
#include "BossFightStageChangedDelegateDelegate.h"
#include "BossFightState.h"
#include "EBossFightStage.h"
#include "BossFightStateComponent.generated.h"

class AController;
class APawn;
class UDamageClass;
class UDestructibleSubHealthComponent;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBossFightStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightStageChangedDelegate OnStageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightImmunityChangedDelegate OnImmunityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* SegmentTransferDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRecoveryStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* ImmunePhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseIndexKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FightState, meta=(AllowPrivateAccess=true))
    FBossFightState FightState;
    
public:
    UBossFightStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartBossFight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FightState(const FBossFightState& InOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseHealthDestroyed(UDestructibleSubHealthComponent* InSubHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerControllerChanged(APawn* InPawn, AController* InOldController, AController* InNewController);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyRecoveryFinished();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyObjectiveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImmune() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBossFightStage GetStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhaseIndex() const;
    
};

