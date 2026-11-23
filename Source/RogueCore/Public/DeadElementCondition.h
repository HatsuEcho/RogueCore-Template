#pragma once
#include "CoreMinimal.h"
#include "ElementCondition.h"
#include "DeadElementCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDeadElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
    UDeadElementCondition();

};

