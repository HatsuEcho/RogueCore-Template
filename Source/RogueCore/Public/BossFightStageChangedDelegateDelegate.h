#pragma once
#include "CoreMinimal.h"
#include "EBossFightStage.h"
#include "BossFightStageChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossFightStageChangedDelegate, EBossFightStage, NewStage, int32, PhaseIndex);

