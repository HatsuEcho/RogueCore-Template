#pragma once
#include "CoreMinimal.h"
#include "ERunMigrationState.generated.h"

UENUM(BlueprintType)
enum class ERunMigrationState : uint8 {
    None,
    Waiting,
    Hosting,
    Joining,
    Failed,
};

