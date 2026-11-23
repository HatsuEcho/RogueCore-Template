#pragma once
#include "CoreMinimal.h"
#include "BXEDamageEvent.h"
#include "DamageParams.h"
#include "BXEDamageEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBXEDamageEventDelegate, const FBXEDamageEvent&, DamageEvent, const FDamageParams&, DamageParams);

