#pragma once
#include "CoreMinimal.h"
#include "ECooperDroneAIState.h"
#include "StateChangedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateChangedSig, ECooperDroneAIState, aCurrentState);

