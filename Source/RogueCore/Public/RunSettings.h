#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "Math/Interval.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "PlanetGuaranteedRun.h"
#include "RandIntegerValue.h"
#include "Templates/SubclassOf.h"
#include "ERunBossType.h"
#include "RunSettings.generated.h"

class UVoteOptionPool;


class UMissionDNA;
class UPrimaryMutator;
class URiskVector;
class URunTemplate;

UCLASS(Blueprintable)
class ROGUECORE_API URunSettings : public UDataAsset {
    GENERATED_BODY()
protected:
    
    
    
    
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AmountOfOutOfRangeBiomes;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> AllRuns;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> AllMutators;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMissionDNA>> AllDNA;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> CustomRuns;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> CustomMutators;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMissionDNA>> CustomDNA;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<URiskVector>, TSoftObjectPtr<URiskVector>> IncompatibleRiskVectors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumRunsPerBiome;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanetGuaranteedRun> GuaranteedRuns;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfNormalRunsInEachZoneDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfNormalRunsInEachZoneDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfNormalRunsInEachZoneDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfNormalRunsInEachZoneDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfMutatedRunsInEachZoneDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfMutatedRunsInEachZoneDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfMutatedRunsInEachZoneDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandIntegerValue> AmountOfMutatedRunsInEachZoneDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> RunsDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> RunsDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> RunsDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URunTemplate*> RunsDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> MutatorsDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> MutatorsDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> MutatorsDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryMutator*> MutatorsDepth4;

    URunSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URunTemplate*> GetAllRuns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimaryMutator*> GetAllMutators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UMissionDNA>> GetAllDNA() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunBossType, UVoteOptionPool*> BossRiskVectorVotePools;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddMissionsOfAllDifficulties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanetGuaranteedRun> EmptyBiomeRuns;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoteOptionPool* GetBossRiskVectorVotePool(ERunBossType Boss) const;

};

