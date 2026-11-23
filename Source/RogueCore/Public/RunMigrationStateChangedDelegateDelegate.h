#pragma once
#include "CoreMinimal.h"
#include "ERunMigrationState.h"
#include "RunMigrationStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRunMigrationStateChangedDelegate, ERunMigrationState, NewState);

