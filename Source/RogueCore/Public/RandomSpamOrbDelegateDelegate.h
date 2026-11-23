#pragma once
#include "CoreMinimal.h"
#include "RandomSpamOrbDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRandomSpamOrbDelegate, bool, bActive);

