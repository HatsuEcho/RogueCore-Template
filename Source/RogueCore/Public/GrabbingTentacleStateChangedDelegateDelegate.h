#pragma once
#include "CoreMinimal.h"
#include "EGrabbingTentacleState.h"
#include "GrabbingTentacleStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrabbingTentacleStateChangedDelegate, EGrabbingTentacleState, NewState, EGrabbingTentacleState, oldState);

