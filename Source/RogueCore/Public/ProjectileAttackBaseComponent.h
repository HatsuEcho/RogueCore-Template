#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "AttackBaseComponent.h"
#include "EProjectileAttackRotationType.h"
#include "ProjectileAttackDelegateDelegate.h"
#include "ProjetileSpawnedDelegateDelegate.h"
#include "ActiveAttackMontage.h"
#include "ProjectileAttackBaseComponent.generated.h"

class AActor;
class UAnimMontage;
class UProjectileAttack;
class UTargetValidator;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UProjectileAttackBaseComponent : public UAttackBaseComponent {
    GENERATED_BODY()
protected:
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileAttackRotationType RotationHandling;
    
    
    
    
    
    
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProjectileAttack*> Projectiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetValidator* FinalValidationCheck;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProjectilesIgnoreEachOther;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginOffsetOverride;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnAttackStartedEvent;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnProjectileFiredEvent;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnAttackEndedEvent;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjetileSpawnedDelegate OnProjectileSpawnedEvent;

    UProjectileAttackBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool TriggerMontage(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SpawnProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPerformAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastProjectileFired();
    
    UFUNCTION(BlueprintCallable)
    void CancelMontage();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddProjectile(UProjectileAttack* Projectile);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveAttackMontage ActiveMontage;

    UFUNCTION(BlueprintCallable)
    void OnPerformAttack_Implementation();

};

