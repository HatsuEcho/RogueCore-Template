#pragma once
#include "CoreMinimal.h"
#include "EFitnessMontageSectionNames.generated.h"

UENUM(BlueprintType)
enum class EFitnessMontageSectionNames : uint8 {
    IdleUp,
    IdleDown,
    GoingUp,
    GoingDown,
    MissedUp,
    MissedDown,
    Start,
    Fail,
    End,
};

