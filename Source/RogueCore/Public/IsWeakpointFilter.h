#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "IsWeakpointFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UIsWeakpointFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UIsWeakpointFilter();

};

