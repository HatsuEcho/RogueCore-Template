#pragma once
#include "CoreMinimal.h"
#include "ERarityWeightType.h"
#include "SavablePrimaryDataAsset.h"
#include "BXEUnlockCollection.generated.h"

class URarityWeightsSettings;
class UUnlockCollectionTag;


class UBXEUnlockBase;
class UCollectionConditionBase;
class UMissionStat;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UBXEUnlockCollection : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* NegotiationCompleteStat;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddDroneUnlocks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERarityWeightType RarityWeightType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgressiveCollection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCollectionConditionBase*> CollectionConditions;

public:
    UBXEUnlockCollection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERarityWeightType GetRarityWeightType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllUnlocks(TSet<UBXEUnlockBase*>& OutAllUnlocks) const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UUnlockCollectionTag*, URarityWeightsSettings*> TagRarityWeightsOverrides;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockBase*> FallbackUnlocks;

};

