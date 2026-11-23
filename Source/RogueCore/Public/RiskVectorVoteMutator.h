#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "RiskVectorVoteMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URiskVectorVoteMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteCount;
    
public:
    URiskVectorVoteMutator();

};

