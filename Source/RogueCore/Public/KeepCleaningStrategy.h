#pragma once
#include "CoreMinimal.h"
#include "StandardExitStrategy.h"
#include "KeepCleaningStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UKeepCleaningStrategy : public UStandardExitStrategy {
    GENERATED_BODY()
public:
    UKeepCleaningStrategy();

};

