#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "XPPerExpeniteModifierMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UXPPerExpeniteModifierMutator : public UMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    UXPPerExpeniteModifierMutator();

};

