#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Engine/HitResult.h"
#include "RecallableActor.h"
#include "TeleporterPad.generated.h"

class AActor;
class ATeleporterItem;
class ATeleporterPad;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ATeleporterPad : public ARecallableActor {
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
    float SpawnOverlapGraceSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNpcArrivalSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LinkedPad, meta=(AllowPrivateAccess=true))
    ATeleporterPad* LinkedPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Charges, meta=(AllowPrivateAccess=true))
    int32 ChargesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Charges, meta=(AllowPrivateAccess=true))
    int32 MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Charges, meta=(AllowPrivateAccess=true))
    int32 PlayerTeleportCost;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SuppressedActors;
    
public:
    ATeleporterPad(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TeleportRefused(AActor* RefusedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_LinkedPadChanged(ATeleporterPad* NewLinkedPad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DwellStarted(AActor* DwellingActor, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DwellCancelled(AActor* DwellingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Departed(AActor* TeleportedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ChargesChanged(int32 InChargesLeft, int32 InMaxCharges);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Arrived(AActor* TeleportedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkedPad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Charges();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATeleporterItem* GetOwningItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATeleporterPad* GetLinkedPad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTeleportPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArrivalLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyRefused(AActor* RefusedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_NotifyDwellStarted(AActor* DwellingActor, float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_NotifyDwellCancelled(AActor* DwellingActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyDeparted(AActor* TeleportedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyArrived(AActor* TeleportedActor);
    
};

