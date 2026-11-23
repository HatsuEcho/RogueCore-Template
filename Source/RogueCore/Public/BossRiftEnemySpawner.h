#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "BossRiftActor.h"
#include "BossRiftEnemiesSpawningDelegateDelegate.h"
#include "BossRiftEnemySpawnedDelegateDelegate.h"
#include "EBossEnemySpawnLocation.h"
#include "EBossEnemySpawnSkipReason.h"
#include "BossRiftEnemySpawner.generated.h"

class APawn;
class UEnemyDescriptor;
class UEnemySpawnManager;

UCLASS(Blueprintable)
class ABossRiftEnemySpawner : public ABossRiftActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossRiftEnemiesSpawningDelegate OnEnemiesSpawning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossRiftEnemySpawnedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyPerSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAliveDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossEnemySpawnLocation SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
public:
    ABossRiftEnemySpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_SpawnSkipped(EBossEnemySpawnSkipReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EnemySpawned(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EnemiesSpawning(const TArray<FVector>& Locations, int32 EnemyCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnemySpawned(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_EnemiesSpawning(const TArray<FVector>& Locations, int32 EnemyCount);
    
};

