#pragma once
#include "CoreMinimal.h"
#include "StunBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStunBeginDelegate, float, Duration, float, Strength);

