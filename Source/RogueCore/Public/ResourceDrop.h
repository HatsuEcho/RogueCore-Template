#pragma once
#include "CoreMinimal.h"
#include "ResourceDrop.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    ROGUECORE_API FResourceDrop();
};

