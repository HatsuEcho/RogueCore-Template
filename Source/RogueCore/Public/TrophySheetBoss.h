#pragma once
#include "CoreMinimal.h"
#include "TrophySheetBoss.generated.h"

class UEnemyID;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTrophySheetBoss {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyID* EnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    ROGUECORE_API FTrophySheetBoss();
};

