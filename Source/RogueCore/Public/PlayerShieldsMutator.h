#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "PlayerShieldsMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPlayerShieldsMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldModifier;

    UPlayerShieldsMutator();

};

