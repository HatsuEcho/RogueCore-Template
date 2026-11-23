#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "PlayerEventArmorBreak.h"
#include "PlayerEventRadiationBoilPop.h"
#include "PlayerEventsComponent.generated.h"

class AActor;
class AAmmoDrivenWeapon;
class AGrenade;
class APlayerCharacter;
class UResourceData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPlayerEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponFiredEventDelegate, AAmmoDrivenWeapon*, Weapon, APlayerCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiationBoilPlayerEvent, const FPlayerEventRadiationBoilPop&, Boil);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSummonedBoss, AActor*, BossActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerDepositedResourceDelegate, UResourceData*, DepositedResource, float, DepositedAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerActivatedTurret, AActor*, TurretActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerActivatedDataTerminal, AActor*, TerminalActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrenadeThrownEventDelegate, AGrenade*, Grenade, APlayerCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmorBreakPlayerEvent, const FPlayerEventArmorBreak&, Event);

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredEventDelegate OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredEventDelegate OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredEventDelegate OnReloadCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredEventDelegate OnWeaponReloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredEventDelegate OnWeaponOverheated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPowerAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrownEventDelegate OnGrenadeThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDepositedResourceDelegate OnDepositedResource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSummonedBoss OnBossSummoned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActivatedTurret OnActivatedTurret;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActivatedDataTerminal OnActivatedDataTerminal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiationBoilPlayerEvent OnRadiationBoilPopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorBreakPlayerEvent OnArmorPointPopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorBreakPlayerEvent OnWeakPointPopped;
    
    UPlayerEventsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BroadcastBossSummoned(AActor* BossActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastActivatedTurret(AActor* TurretActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastActivatedDataTerminal(AActor* TerminalActor);
    
};

