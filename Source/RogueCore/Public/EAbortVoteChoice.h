#pragma once
#include "CoreMinimal.h"
#include "EAbortVoteChoice.generated.h"

UENUM(BlueprintType)
enum class EAbortVoteChoice : uint8 {
    Undecided,
    ReturnWithHost,
    RestartStage,
};

