#pragma once
#include "CoreMinimal.h"
#include "TargetValidator.h"
#include "CompositeTargetValidator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCompositeTargetValidator : public UTargetValidator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTargetValidator*> TargetValidators;

    UCompositeTargetValidator();

};

