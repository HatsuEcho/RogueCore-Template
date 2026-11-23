#pragma once
#include "CoreMinimal.h"
#include "TelegraphInfo.generated.h"

USTRUCT(BlueprintType)
struct FTelegraphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTelegraphing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TelegraphAnimIndex;
    
    ROGUECORE_API FTelegraphInfo();
};

