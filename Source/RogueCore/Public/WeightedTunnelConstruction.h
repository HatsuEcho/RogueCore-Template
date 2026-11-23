#pragma once
#include "CoreMinimal.h"
#include "WeightedTunnelConstruction.generated.h"

class ATunnelConstruction;

USTRUCT(BlueprintType)
struct FWeightedTunnelConstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATunnelConstruction> Construction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceLengthFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    ROGUECORE_API FWeightedTunnelConstruction();
};

