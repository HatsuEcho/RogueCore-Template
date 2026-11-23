#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEvent.h"
#include "AmberEvent.generated.h"

class AFSDPawn;
class APawn;
class UAmberEventEnemyPool;
class UDamageComponent;
class UHealthComponentBase;

UCLASS(Blueprintable)
class ROGUECORE_API AAmberEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAmberEventEnemyPool*> EnemyPools;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFSDPawn*> spawnedEnemies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAmberEventEnemyPool> CurrentPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelayBeforeSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnRange;

    AAmberEvent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

