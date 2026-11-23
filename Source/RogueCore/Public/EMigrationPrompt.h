#pragma once
#include "CoreMinimal.h"
#include "EMigrationPrompt.generated.h"

UENUM(BlueprintType)
enum class EMigrationPrompt : uint8 {
    None,
    Reconnecting,
    OfferHost,
    WaitingForMigration,
    TakingOver,
    Joining,
    Failed,
    WaitingToJoin,
};

