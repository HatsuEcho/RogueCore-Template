#pragma once
#include "CoreMinimal.h"
#include "EEllisDroneState.generated.h"

UENUM(BlueprintType)
enum class EEllisDroneState : uint8 {
    Following,
    LandingToUpgrade,
    LandingToDeposit,
    Dispensing,
    ActivatingElevator,
    Waiting,
    Deposit,
    ActivatingMachinery,
    ProcessingArtifact,
    DispensingArtifact,
    ProcessingPotentExpenite,
    DispensingPotentExpenite,
    Saluting,
    TakeoffToFollow,
    TakeoffToDeposit,
};

