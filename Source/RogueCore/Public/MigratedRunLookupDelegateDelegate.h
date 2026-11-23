#pragma once
#include "CoreMinimal.h"
#include "MigratedRunLookupDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMigratedRunLookupDelegate, bool, bFound);

