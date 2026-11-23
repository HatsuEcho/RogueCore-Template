#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "EnemyWaveIndex.h"
#include "EnemyWaveTime.h"
#include "RiftSpawnOverrides.h"
#include "Templates/SubclassOf.h"
#include "WaveEntry.h"
#include "EnemyWaveManager.generated.h"

class ACorespawnRift;
class AFSDGameMode;
class APawn;
class UEnemySpawnManager;
class UEnemyWaveController;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEnemyWaveManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyWaveManagerWaveTriggeredDelegate, TArray<UEnemyWaveController*>, Waves);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyWaveController*> ActiveWaves;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyWaveController*> ActiveSecretWaves;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACorespawnRift*> SpawnedRifts;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RiftsAreOpen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameMode* GameMode;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DifficultyBasedSpawnBlockStack;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnemyWaveTime> TimesForRecurringWaves;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEntry> RecurringWave;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnemyWaveController> PersistentWave;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRecurringWavesEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDifficultyBasedSpawningEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACorespawnRift> RiftClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACorespawnRift> FallbackRiftClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftSpawnDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftOptimalSpawnDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftMinSpawnDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftMinDistanceToImportantLocations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftSpawnCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RiftsArePermanentAndAlwaysActive;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyWaveManagerWaveTriggeredDelegate OnRecurringWaveTriggered;

    
public:
    UEnemyWaveManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<UEnemyWaveController*> TriggerWaves(const TSubclassOf<UEnemyWaveController> waveClass, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    UEnemyWaveController* TriggerWave(const TSubclassOf<UEnemyWaveController> waveClass, const FEnemyWaveIndex WaveIndex);
    
    UFUNCTION(BlueprintCallable)
    UEnemyWaveController* TriggerSecretWave(const TSubclassOf<UEnemyWaveController> waveClass);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSecretWaves();
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> SpawnRifts(const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides);
    
    UFUNCTION(BlueprintCallable)
    void SetAllWavesAreBlocked(const bool allWavesAreBlocked);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushDisableDifficultyBasedSpawns(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopDisableDifficultyBasedSpawns(UObject* Owner);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Enemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllWavesAreBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreRiftsOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void AddExternallySpawnedRift(ACorespawnRift* InNewRift);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRiftDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftTopUpCooldown;

    UFUNCTION(BlueprintCallable)
    void OnRiftBossFightOver();

};

