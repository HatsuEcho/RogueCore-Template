#pragma once
#include "CoreMinimal.h"
#include "TargetValidator.h"
#include "WithinAngleValidator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWithinAngleValidator : public UTargetValidator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UWithinAngleValidator();

};

