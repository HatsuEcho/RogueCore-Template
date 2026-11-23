#pragma once
#include "CoreMinimal.h"
#include "FSDTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct FFSDTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FFSDTaskInfo();
};

