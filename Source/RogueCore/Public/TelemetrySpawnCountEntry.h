#pragma once
#include "CoreMinimal.h"
#include "TelemetrySpawnCountEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTelemetrySpawnCountEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Column;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> Classes;
    
    ROGUECORE_API FTelemetrySpawnCountEntry();
};

