#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEscortHammeState.h"
#include "EscortHammerMovementSetup.h"
#include "EscortHammerMovementState.h"
#include "DelegateDelegate.h"
#include "EEscortHammerState.h"
#include "Templates/SubclassOf.h"
#include "EscortHammerObjectiveActor.generated.h"

class APlayerCharacter;
class UEscortHammerProgressWidget;


class UPathfinderCollisionComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AEscortHammerObjectiveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerRoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerMovementRoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerLocationStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerLocationEnd;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerPathfinderCollisionRoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathfinderCollisionComponent* HammerPathfinderCollision;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEscortHammeState, FEscortHammerMovementSetup> MovementSetups;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EEscortHammeState State;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortHammerMovementState MovementState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortHammerMovementState LocalMovementState;

    AEscortHammerObjectiveActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHammerTargetVelocityMultiplier(float TargetVelocityMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVelocityChanged(float NewVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EEscortHammeState NewState, EEscortHammeState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EEscortHammeState prevState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoved(float CurrentLocationPerc);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AdvanceState();
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnWindUpProgressChanged;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPlayersInRangeChanged;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEscortHammerProgressWidget> WindUpProgressWidgetClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPathfinderCollisionUpdateTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClientLocationDelta;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayersInRange, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> PlayersInRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEscortHammerProgressWidget* WindUpProgressWidget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalWindUpProgress;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlayersInRange(const TArray<APlayerCharacter*>& NewPlayersInRange);

    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInRange();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindUpProgress() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerCharacter*> GetPlayersInRange() const;

};

