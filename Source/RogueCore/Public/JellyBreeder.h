#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AFlyingBug.h"
#include "Templates/SubclassOf.h"
#include "JellyBreeder.generated.h"

class AActor;
class AProjectile;
class UAnimSequenceBase;
class UEnemyDescriptor;
class UFXSystemAsset;
class UPhysicalMaterial;
class USoundBase;

UCLASS(Blueprintable)
class ROGUECORE_API AJellyBreeder : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EggSpawnAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* EggParticles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EggSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* EnemyToSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> EggClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenBursts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenEggs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseToSpawnEggTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* WeakPointMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* UnWeakPointMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EggBurstSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxJellies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierOnHighPlayerCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BreedMode, meta=(AllowPrivateAccess=true))
    bool IsInBreedMode;

    AJellyBreeder(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SpawnEnemies(AProjectile* egg, int32 AmountToSpawn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlaySpawnEggAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BreedMode();
    
    UFUNCTION(BlueprintCallable)
    void OnJellyDestroyed(AActor* aActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BreedModeFlipped(bool aIsLayingEggs);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

