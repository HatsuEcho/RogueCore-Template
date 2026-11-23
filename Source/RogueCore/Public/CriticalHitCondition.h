#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "CriticalHitCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCriticalHitCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UCriticalHitCondition();

};

