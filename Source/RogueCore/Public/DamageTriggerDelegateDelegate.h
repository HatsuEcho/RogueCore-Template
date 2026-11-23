#pragma once
#include "CoreMinimal.h"
#include "BXEDamageEvent.h"
#include "DamageParams.h"
#include "DamageTriggerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageTriggerDelegate, const FBXEDamageEvent&, dEvent, const FDamageParams&, Params);

