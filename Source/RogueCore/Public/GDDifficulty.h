#pragma once
#include "CoreMinimal.h"
#include "ERunHazard.h"
#include "GDDifficulty.generated.h"

class UDifficultySetting;

USTRUCT(BlueprintType)
struct FGDDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunHazard, UDifficultySetting*> Difficulties;
    
    ROGUECORE_API FGDDifficulty();
};

