#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "IsRadialFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UIsRadialFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UIsRadialFilter();

};

