#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameFramework/Actor.h"
#include "FakeSawMover.h"
#include "SawFakeMoveState.h"
#include "WallSaw.generated.h"

class UCapsuleComponent;
class UCurveFloat;
class UFXSystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AWallSaw : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitCapsule;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedCof;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelOverTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* GroundParticles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeSawMover FakeMover;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PosVel, meta=(AllowPrivateAccess=true))
    FSawFakeMoveState PosVel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopWeakpointRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHitRangeFromCenter;

    AWallSaw(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCheckForWeakpoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMovementDirection(FVector Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PushEnemyAndCheckForWeakpoint(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PosVel(const FSawFakeMoveState& NewPosVel);
    
    UFUNCTION(BlueprintCallable)
    void OnDurationEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(FVector Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasJustHit(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GrazeOverlapCallback(AActor* Actor, UPrimitiveComponent* prim);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_Initialize(const FTransform& Transform, const FVector& Direction);
    
};

