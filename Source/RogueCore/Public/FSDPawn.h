#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "GameFramework/Pawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BoolDelegateDelegate.h"
#include "EPawnAttitude.h"
#include "ElementState.h"
#include "EnemySpawnId.h"
#include "PawnMaterialState.h"
#include "ProjectileSpawner.h"
#include "Targetable.h"
#include "NamedSlotMaterial.h"
#include "PawnMeshOriginalMaterials.h"
#include "PawnMeshOverlayMaterial.h"
#include "FSDPawn.generated.h"

class USkeletalMeshComponent;


class AActor;
class AFSDAIController;
class APlayerCharacter;
class UElementComponent;
class UElementType;
class UEnemyDescriptor;
class UHealthComponentBase;
class UMaterialInterface;
class UPawnStatsComponent;
class UPrimitiveComponent;
class UStatusEffectsComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AFSDPawn : public APawn, public IGameplayTagAssetInterface, public ITargetable, public IProjectileSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* TargetedPlayer;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnemySpawnId EnemySpawnId;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnFrozenEvent;
    
public:
    AFSDPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
    UFUNCTION(BlueprintCallable)
    void StopFleeing();
    
    UFUNCTION(BlueprintCallable)
    void StartFleeing(const FVector& fromLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnId(const FEnemySpawnId NewId);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMaterial(UMaterialInterface* InOverrideMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOriginalMaterials();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Alerted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFrozen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedFleeing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedFleeing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaterialState(FPawnMaterialState PrevMaterialState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFrozen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFrozen(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstHostileDamageTaken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyScaled(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void OnElectricChanged(UElementType* ElementType, const FElementState& ElementState);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnColdChanged(UElementType* ElementType, const FElementState& ElementState);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorShattered(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnAlerted();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UElementComponent* Element;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* SpawnedFromDescriptor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFrozen, meta=(AllowPrivateAccess=true))
    bool IsFrozen;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanFlee;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxColdSlowdown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxElectricSlowdown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FleeInsteadOfBackingOff;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFleeing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStatsInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaterialState, meta=(AllowPrivateAccess=true))
    FPawnMaterialState MaterialState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;

    UFUNCTION(BlueprintCallable)
    void MakeRagdollMesh(UPrimitiveComponent* mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnemySpawnId GetSpawnId() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsAlerted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponentBase* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDAIController* GetFSDAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPawnAttitude GetAttitude() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExplodePawn();
    
    UFUNCTION(BlueprintCallable)
    void BackOffFromLocation(const FVector& fromLocation);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override { return GameplayTags.HasTag(TagToCheck); }

    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTags.HasAny(TagContainer); }

    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTags.HasAll(TagContainer); }

        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void ShowDamageEffects(UFXSystemAsset* Particles, FVector Location, FRotator Orientation);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    UHealthComponentBase* GetTargetHealthComponent() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    FVector GetTargetCenterMass() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    bool GetIsTargetable() const;

protected:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer BP_GetOwnedGameplayTags() const override { return GameplayTags; }

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExternalInvulnerable, meta=(AllowPrivateAccess=true))
    bool bExternalInvulnerable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CycleOverrideMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CloakVisualMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPawnMeshOverlayMaterial> CloakSavedOverlays;

    UFUNCTION(BlueprintCallable)
    void SetNamedSlotMaterials(const TArray<FNamedSlotMaterial>& InSlotMaterials);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetExternalInvulnerable(bool invulnerable);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveOverrideMaterials();

    UFUNCTION(BlueprintCallable)
    void OnRep_ExternalInvulnerable();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExternallyInvulnerable() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponent() const;

};

