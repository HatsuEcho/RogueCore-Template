#pragma once
#include "CoreMinimal.h"
#include "ElementChangeEntry.generated.h"

class UElementType;

USTRUCT(BlueprintType)
struct FElementChangeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* Element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    ROGUECORE_API FElementChangeEntry();
};

