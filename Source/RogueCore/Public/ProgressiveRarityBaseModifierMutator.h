#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ProgressiveRarityBaseModifierMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UProgressiveRarityBaseModifierMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAddition;

public:
    UProgressiveRarityBaseModifierMutator();

};

