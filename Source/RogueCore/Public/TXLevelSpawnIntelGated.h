#pragma once
#include "CoreMinimal.h"
#include "TXLevelSpawnIntelGated.generated.h"

USTRUCT(BlueprintType)
struct FTXLevelSpawnIntelGated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString actor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString access_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 count;
    
    ROGUECORE_API FTXLevelSpawnIntelGated();
};

