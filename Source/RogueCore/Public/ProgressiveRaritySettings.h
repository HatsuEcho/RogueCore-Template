#pragma once
#include "CoreMinimal.h"
#include "ProgressiveRaritySettings.generated.h"

class UBXEUnlockRarity;

USTRUCT(BlueprintType)
struct FProgressiveRaritySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockRarity*> ProgressiveRarities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightPowerBasePerTimeNotShown;
    
    ROGUECORE_API FProgressiveRaritySettings();
};

