#pragma once
#include "CoreMinimal.h"
#include "TXHostMigrationStart.generated.h"

USTRUCT(BlueprintType)
struct FTXHostMigrationStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 candidate_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 candidate_count;
    
    ROGUECORE_API FTXHostMigrationStart();
};

