#pragma once
#include "CoreMinimal.h"
#include "EAbortVoteChoice.h"
#include "AbortVoteEntry.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FAbortVoteEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFSDPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbortVoteChoice Choice;
    
    ROGUECORE_API FAbortVoteEntry();
};

