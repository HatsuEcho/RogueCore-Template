#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "XPPerKillModifierMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UXPPerKillModifierMutator : public UMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    UXPPerKillModifierMutator();

};

