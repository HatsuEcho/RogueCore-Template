#pragma once
#include "CoreMinimal.h"
#include "EEscortHammerState.generated.h"

UENUM(BlueprintType)
enum class EEscortHammerState : uint8 {
    Initial,
    WindUp,
    Ready,
    PrepLaunch,
    Launch,
    Impacted,
    Complete,
    NUM,
};

