#pragma once
#include "CoreMinimal.h"
#include "EChargedBurstState.h"
#include "ChargedBurstStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargedBurstStateChangedSignature, EChargedBurstState, NewState, EChargedBurstState, oldState);

