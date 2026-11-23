#pragma once
#include "CoreMinimal.h"
#include "ERunMigrationReason.generated.h"

UENUM(BlueprintType)
enum class ERunMigrationReason : uint8 {
    None,
    HostLost,
    AbortSplit,
    Rejoin,
};

