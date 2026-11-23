#pragma once
#include "CoreMinimal.h"
#include "ResourceCondition.h"
#include "ChanceMutatorCondition.generated.h"

class UGenericMutator;

UCLASS(Blueprintable, EditInlineNew)
class UChanceMutatorCondition : public UResourceCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericMutator* SpawnChanceMutator;
    
public:
    UChanceMutatorCondition();

};

