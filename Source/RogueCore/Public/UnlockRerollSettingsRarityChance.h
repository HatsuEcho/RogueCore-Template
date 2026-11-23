#pragma once
#include "CoreMinimal.h"
#include "EUnlockRarityType.h"
#include "UnlockRerollSettingsRarityChance.generated.h"

USTRUCT(BlueprintType)
struct FUnlockRerollSettingsRarityChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockRarityType Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    ROGUECORE_API FUnlockRerollSettingsRarityChance();
};

