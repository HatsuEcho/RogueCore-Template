#pragma once
#include "CoreMinimal.h"
#include "AbilityExitStrategy.h"
#include "StandardExitStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UStandardExitStrategy : public UAbilityExitStrategy {
    GENERATED_BODY()
public:
    UStandardExitStrategy();

};

