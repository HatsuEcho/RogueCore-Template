#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Engine/HitResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
#include "DeepPathFinderSize.h"
#include "ETeleporterPortalReplaceMode.h"
#include "TeleporterColorPair.h"
#include "Templates/SubclassOf.h"
#include "TeleporterPortal.generated.h"

class ADeepPathfinderCharacter;
class ATeleporterPortal;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ATeleporterPortal : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TeleportTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrivalHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageSuppressSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffSurfaceExitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOverlapGraceSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNpcArrivalSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollapseSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize LargestNPCSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ADeepPathfinderCharacter>> TeleportExclusions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LinkedPortal, meta=(AllowPrivateAccess=true))
    ATeleporterPortal* LinkedPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplaceMode, meta=(AllowPrivateAccess=true))
    ETeleporterPortalReplaceMode Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Collapsing, meta=(AllowPrivateAccess=true))
    bool bCollapsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ColorPairIndex;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SuppressedActors;
    
public:
    ATeleporterPortal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TeleportRefused(AActor* RefusedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ReplaceModeChanged(ETeleporterPortalReplaceMode NewSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_LinkedPortalChanged(ATeleporterPortal* NewLinkedPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DwellStarted(AActor* DwellingActor, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DwellCancelled(AActor* DwellingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Departed(AActor* TeleportedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Collapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Arrived(AActor* TeleportedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Activated();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplaceMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkedPortal();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Collapsing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollapsing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeleporterPortalReplaceMode GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATeleporterPortal* GetLinkedPortal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorPairIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTeleporterColorPair GetColorPair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArrivalLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleportActor(const AActor* InActor) const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyRefused(AActor* InRefusedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_NotifyDwellStarted(AActor* InDwellingActor, float InDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_NotifyDwellCancelled(AActor* InDwellingActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyDeparted(AActor* InTeleportedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyArrived(AActor* InTeleportedActor);
    
};

