#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EWaveControllerType.h"
#include "EnemyWaveIndex.h"
#include "RiftSpawnOverrides.h"
#include "EnemyWaveController.generated.h"

class ACorespawnRift;

UCLASS(Blueprintable)
class ROGUECORE_API UEnemyWaveController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnemyWaveIndex WaveIndex;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVisible;

public:
    UEnemyWaveController();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWave();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> SpawnRifts(const FVector InQueryLocation, const FRiftSpawnOverrides Overrides);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveControllerType Type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsComplete;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuitableForSolo;

    UFUNCTION(BlueprintCallable)
    void SetVisible(const bool NewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWave();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveRifts();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnemyWaveIndex GetWaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaveControllerType GetType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetLastSpawnedRiftLocations() const;
    
};

