#pragma once
#include "CoreMinimal.h"
#include "RunSnapshotResource.generated.h"

USTRUCT(BlueprintType)
struct FRunSnapshotResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAmount;
    
    ROGUECORE_API FRunSnapshotResource();
};

