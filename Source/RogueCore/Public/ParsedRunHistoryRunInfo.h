#pragma once
#include "CoreMinimal.h"
#include "ParsedRunHistoryRunInfo.generated.h"

class URun;
class URunTemplate;

USTRUCT(BlueprintType)
struct FParsedRunHistoryRunInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunTemplate* TargetTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URun* Run;
    
    FParsedRunHistoryRunInfo();
};

