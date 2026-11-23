#pragma once
#include "CoreMinimal.h"
#include "ERunMigrationDestination.generated.h"

UENUM(BlueprintType)
enum class ERunMigrationDestination : uint8 {
    None,
    RestartStage,
    StageEnd,
    SpaceRig,
};

