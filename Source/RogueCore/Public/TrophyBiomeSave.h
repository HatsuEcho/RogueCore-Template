#pragma once
#include "CoreMinimal.h"
#include "TrophyBossSave.h"
#include "TrophyBiomeSave.generated.h"

USTRUCT(BlueprintType)
struct FTrophyBiomeSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BiomeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrophyBossSave> Bosses;
    
    ROGUECORE_API FTrophyBiomeSave();
};

