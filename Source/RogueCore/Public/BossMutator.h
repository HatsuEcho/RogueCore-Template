#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "BossMutator.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBossMutator : public UMutator {
    GENERATED_BODY()
public:
    UBossMutator();

    UFUNCTION(BlueprintCallable)
    static void ApplyBossMutators(AActor* Boss);
    
};

