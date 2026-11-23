#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "AmmoDrivenWeapon.h"
#include "ChargedBurstFloatSignatureDelegate.h"
#include "ChargedBurstStageSignatureDelegate.h"
#include "ChargedBurstStateChangedSignatureDelegate.h"
#include "EChargedBurstState.h"
#include "ItemAnimationItem.h"
#include "RecoilSettings.h"
#include "ChargedBurstWeapon.generated.h"

class UAudioComponent;
class UCurveFloat;
class USoundBase;
class UWeaponFireComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AChargedBurstWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHoldTimeForCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstCancelWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeToBurstShotsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstRateOfFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ChargeStageThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponFireComponent* BurstWeaponFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecoilSettings BurstRecoilSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAnimationItem ChargeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAnimationItem BurstFireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BurstFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BurstFireSoundTail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargedBurstStateChangedSignature OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargedBurstFloatSignature OnChargeProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargedBurstStageSignature OnChargeStageReached;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EChargedBurstState State;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomMuzzles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> BurstFireSoundInstance;

    AChargedBurstWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartBurst(float InHeldSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(EChargedBurstState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EChargedBurstState InOldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurstActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EChargedBurstState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeProgress() const;
    
};

