#pragma once
#include "CoreMinimal.h"
#include "TXLevelSpawnResource.generated.h"

USTRUCT(BlueprintType)
struct FTXLevelSpawnResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    ROGUECORE_API FTXLevelSpawnResource();
};

