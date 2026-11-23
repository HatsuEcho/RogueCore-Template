#pragma once
#include "CoreMinimal.h"
#include "ThermalFeedbackBoolSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FThermalFeedbackBoolSignature, bool, Active);

