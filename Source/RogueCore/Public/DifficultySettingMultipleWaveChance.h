#pragma once
#include "CoreMinimal.h"
#include "DifficultySettingMultipleWaveChance.generated.h"

USTRUCT(BlueprintType)
struct FDifficultySettingMultipleWaveChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FDifficultySettingMultipleWaveChance();
};

