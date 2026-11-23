#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DualAbilityItem.h"
#include "EUnlockLogicRange.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireOwner.h"
#include "GuardianAbilityItem.generated.h"

class AActor;
class AAuraBubble;
class APlayerCharacter;
class UAnimMontage;
class UDialogDataAsset;
class UNiagaraSystem;
class UPerkAsset;
class UProjectileLauncherComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AGuardianAbilityItem : public ADualAbilityItem, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuardianAbilityItemDelegate);

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileLauncherComponent* projectileLauncher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* RequiredPerkToRepelEnemies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* QuickUseShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AuraShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SalvoActorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AuraClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SalvoInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAuraBubble> AuraInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_QuickUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_SecondaryQuickUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_AuraUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_SecondaryAuraUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_QuickUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_QuickUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_AuraUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_AuraUseAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AruaDurationPerCharge;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockLogicRange EndRepelStunRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EndRepelStunParticles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EndRepelStunDuration;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardianAbilityItemDelegate OnAuraActiveChanged;

    AGuardianAbilityItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ToggleAura(bool Active, FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_QuickUse(FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuraAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuraActive() const;
    
    UFUNCTION(BlueprintCallable)
    void DrainTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateAura() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimationPlayed();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ToggleAura(bool Active, FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_QuickUse(FVector_NetQuantize Origin, FRotator Rotation);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ActivateRepelEndStunParticles(const FVector_NetQuantize Origin, const float Radius);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

