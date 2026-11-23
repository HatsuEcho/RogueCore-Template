#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "MockDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMockDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UMockDamageCondition();

};

