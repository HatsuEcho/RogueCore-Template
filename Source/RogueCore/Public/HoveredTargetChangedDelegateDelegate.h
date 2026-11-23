#pragma once
#include "CoreMinimal.h"
#include "HoveredTargetChangedDelegateDelegate.generated.h"

class AFSDPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoveredTargetChangedDelegate, AFSDPawn*, HoveredTarget);

