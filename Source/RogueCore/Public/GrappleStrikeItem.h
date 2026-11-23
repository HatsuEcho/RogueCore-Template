#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityItem.h"
#include "GrappleStrikeState.h"
#include "HoveredTargetChangedDelegateDelegate.h"
#include "GrappleStrikeItem.generated.h"

class AFSDPawn;
class UDamageAsset;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AGrappleStrikeItem : public AAbilityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoveredTargetChangedDelegate OnHoveredTargetChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedReleaseModifier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindUpTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereTraceRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* Damage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDamageScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FGrappleStrikeState State;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleStartTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPawn> HoveredTarget;

    AGrappleStrikeItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopGrapple();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(const FGrappleStrikeState& NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterImpact(AFSDPawn* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FGrappleStrikeState& prevState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpact(AFSDPawn* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleFailed(bool TooFar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidGrappleTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindUpProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGrappling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPawn* GetHoveredTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGrappleTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPawn* GetGrappleTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageScale() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowImpact(AFSDPawn* Target);
    
};

