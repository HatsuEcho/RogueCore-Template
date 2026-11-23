#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "LevelRarityWeights.h"
#include "RarityWeightsSettings.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URarityWeightsSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelRarityWeights> RarityLevels;

    URarityWeightsSettings();

};

