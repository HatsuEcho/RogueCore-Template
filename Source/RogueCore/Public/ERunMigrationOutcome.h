#pragma once
#include "CoreMinimal.h"
#include "ERunMigrationOutcome.generated.h"

UENUM(BlueprintType)
enum class ERunMigrationOutcome : uint8 {
    Hosted,
    Joined,
    ContinuedSolo,
    FellBackToSolo,
    Kicked,
    Cancelled,
    TimedOut,
    RejoinRefused,
    RejoinHostChanged,
    Failed,
};

