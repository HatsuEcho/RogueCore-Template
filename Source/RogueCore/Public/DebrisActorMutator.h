#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "DebrisActorMutator.generated.h"

class ADebrisDataActor;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDebrisActorMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebrisDataActor> DebrisActor;
    
    UDebrisActorMutator();

};

