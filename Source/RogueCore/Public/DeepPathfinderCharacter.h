#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "Engine/TimerHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "FSDPawn.h"
#include "StunParameters.h"
#include "TriggerAI.h"
#include "DeepPathfinderCharacter.generated.h"

class UAIPlayerControlComponent;
class UDeepPatherFinderCharacterAfflictionComponent;
class UDeepPathfinderMovement;
class UMaterialInterface;
class UObject;
class UPawnAffliction;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ADeepPathfinderCharacter : public AFSDPawn, public ITriggerAI, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* ActiveStunImmunityAffliction;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ActiveStunImmunityTimer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;
    
    
    
    
    
    
    
    
    
    
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 MeshDecalIndex;
    
    
    
    
    
    
public:
    ADeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryJoinFormation();
    
    UFUNCTION(BlueprintCallable)
    void Stun(const FStunParameters& StaggerParams);
    
    UFUNCTION(BlueprintCallable)
    void SetStunImmunity(bool InImmune, const UObject* InStaggerImmunitySource);
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool shouldHide);
    
    UFUNCTION(BlueprintCallable)
    void OnPausedMovementElapsed();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayerStandOn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDurationMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunImunityWindow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> StunImmunitySources;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStunPauseLogic;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsHidden;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStunned;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrozenPauseLogic;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* CurrentStunAffliction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackerRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedInFormationChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPlayerControlComponent* AIPlayerControlComponentCache;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetActorRotation(const FRotator& Rotator);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveFormation();
    
    UFUNCTION(BlueprintCallable)
    void CanTakeDamageChanged(bool CanTakeDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStun() const;
    

    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }
};

