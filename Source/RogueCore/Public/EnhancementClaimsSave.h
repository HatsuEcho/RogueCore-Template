#pragma once
#include "CoreMinimal.h"
#include "EnhancementClaimEntry.h"
#include "EnhancementClaimsSave.generated.h"

USTRUCT(BlueprintType)
struct FEnhancementClaimsSave {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancementClaimEntry> EnhancementClaimEntries;
    
public:
    FEnhancementClaimsSave();
};

