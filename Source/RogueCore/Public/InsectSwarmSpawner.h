#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyPawn.h"
#include "Templates/SubclassOf.h"
#include "InsectSwarmSpawner.generated.h"

class AActor;
class AInsectSwarmEnemy;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AInsectSwarmSpawner : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInsectSwarmEnemy> SwarmType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float respawnDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance;

    AInsectSwarmSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetStaticMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
    
    UFUNCTION(BlueprintCallable)
    void OnSwarmDestroyed(AActor* DestroyedActor);
    
    // Fix for true pure virtual functions not being implemented
        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

};

