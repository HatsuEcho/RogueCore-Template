#pragma once
#include "CoreMinimal.h"
#include "ResourceConditionEntry.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceConditionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    ROGUECORE_API FResourceConditionEntry();
};

