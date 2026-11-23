#pragma once
#include "CoreMinimal.h"
#include "EGooType.h"
#include "GooTypeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGooTypeChangedDelegate, EGooType, NewGooType);

