#pragma once
#include "CoreMinimal.h"
#include "TXHostMigrationEnd.generated.h"

USTRUCT(BlueprintType)
struct FTXHostMigrationEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString outcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float migration_seconds;
    
    ROGUECORE_API FTXHostMigrationEnd();
};

