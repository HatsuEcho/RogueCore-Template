#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "IsCritFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UIsCritFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UIsCritFilter();

};

