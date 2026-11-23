#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "Engine/NetSerialization.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "Engine/NetSerialization.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BXEDamageEvent.h"
#include "CoolDownProgressStyle.h"
#include "DamageParams.h"
#include "DelegateDelegate.h"
#include "EPickaxePartLocation.h"
#include "EPickaxeState.h"
#include "EUpdateDamageNumberColor.h"
#include "Item.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "StackingDamageNumberSource.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGear.h"
#include "PickaxeItem.generated.h"

class AActor;
class AFSDPlayerState;
class UAnimMontage;
class UDamageAsset;
class UDamageListenerComponent;
class UDamageTag;
class UDialogDataAsset;
class UFSDPhysicalMaterial;
class UFXSystemAsset;
class UForceFeedbackEffect;
class UItemCharacterAnimationSet;
class UMaterialInterface;
class UPickaxePart;
class UPlayerAnimInstance;
class UPrimitiveComponent;
class UResourceData;
class USceneComponent;
class USoundCue;
class UStatusEffect;
class UWeaponTagContainerComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API APickaxeItem : public AItem, public IUpgradableGear, public IPickaxePartEquip, public IStackingDamageNumberSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickaxeItemPowerAttackDelegate, AActor*, TargetActor, FVector, TargetCenter);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPickaxePart*> AllEquippedParts;

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageListenerComponent* DamageListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool QuadDamageCarving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPowerAttackRecharged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTerrainDug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickaxeItemPowerAttackDelegate OnPowerAttackedTarget;
    
public:
    APickaxeItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageTag* SpecialAttackTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Root;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Scale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Scale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponTagContainerComponent* WeaponTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpecialCooldownRemaining;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle SpecialCooldownUI;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RockMiningBonus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirtMiningBonus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDamageRangeForAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WideDamageTrackingTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AttackExcertionShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AttackHitSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MiningSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* MineRumble;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PartialMineRumble;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DamageRumble;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* HitDamage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* SpecialDamage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralImpactAudioVolume;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceConsideredSameHit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleFP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleTP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPickaxeState State;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> MinedResourceBonusList;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PowerAttackRefreshedSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventQMining;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningExpectedDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningInitialDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningReducedPlayRatePct;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBezerk;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> BezerkStatusEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PowerAttackEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThirdPersonAimOffset;

    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDurationRemaining(float newCooldownRemaining);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerBezerk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(EPickaxeState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveDebrisInstance(FVector_NetQuantize hitPos, int32 debrisIndex, int32 remappedIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_HitBlock(FVector_NetQuantize position, int32 Material, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DigBlock(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DamageTarget(UPrimitiveComponent* targetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSpecialCooldown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamagedTarget(const FBXEDamageEvent& dEvent, const FDamageParams& Params);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterStatsChanged(AFSDPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCooldownProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCoolDownDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseSpecialCooldownDurationRemaining_Percent(float inPercent);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpecialCoolDownDurationRemaining(float newCooldownRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpecialCoolDownDuration(float newCooldownDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DecreaseSpecialCooldownDurationRemaining_Percent(float inPercent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateHitBlock(FVector_NetQuantize position, int32 materia, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize position, UFXSystemAsset* Particles, USoundCue* cue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize position, bool spawnParticles, int32 Material, float density, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDamageTarget(UPrimitiveComponent* targetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    float GetStackingTimeLimit() const override PURE_VIRTUAL(GetStackingTimeLimit, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxCombinationsPerentry() const override PURE_VIRTUAL(GetMaxCombinationsPerentry, return 0;);
    
    UFUNCTION(BlueprintCallable)
    EUpdateDamageNumberColor GetColorBehaviour() const override PURE_VIRTUAL(GetColorBehaviour, return EUpdateDamageNumberColor::ENormal;);
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double QMiningLastHitTime;

};

