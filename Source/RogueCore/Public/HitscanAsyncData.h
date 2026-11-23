#pragma once
#include "CoreMinimal.h"
#include "HitscanAsyncData.generated.h"

USTRUCT(BlueprintType)
struct FHitscanAsyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipCountWhenFired;
    
    ROGUECORE_API FHitscanAsyncData();
};

