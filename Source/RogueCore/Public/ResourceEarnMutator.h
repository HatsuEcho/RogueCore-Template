#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceEarnMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UResourceEarnMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;

    UResourceEarnMutator();

};

