#pragma once
#include "CoreMinimal.h"
#include "AbilityDataUpdatedDelegate.generated.h"

class UCooperAbillityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityDataUpdated, UCooperAbillityComponent*, Ability);

