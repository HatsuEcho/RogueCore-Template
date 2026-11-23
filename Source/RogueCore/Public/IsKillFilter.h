#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "IsKillFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UIsKillFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UIsKillFilter();

};

