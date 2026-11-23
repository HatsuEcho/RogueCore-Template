#pragma once
#include "CoreMinimal.h"
#include "ChargedBurstStageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargedBurstStageSignature, int32, Stage);

