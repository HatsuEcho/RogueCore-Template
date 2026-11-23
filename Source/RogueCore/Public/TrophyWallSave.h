#pragma once
#include "CoreMinimal.h"
#include "TrophyBiomeSave.h"
#include "TrophySheetSave.h"
#include "TrophyWallSave.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FTrophyWallSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrophyBiomeSave> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrophySheetSave> Sheets;
    
public:
    FTrophyWallSave();
};

