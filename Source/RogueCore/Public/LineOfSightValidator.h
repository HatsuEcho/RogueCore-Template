#pragma once
#include "CoreMinimal.h"
#include "TargetValidator.h"
#include "LineOfSightValidator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API ULineOfSightValidator : public UTargetValidator {
    GENERATED_BODY()
public:
    ULineOfSightValidator();

};

