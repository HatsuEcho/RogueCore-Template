#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "NoEnemyResourceDropMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class UNoEnemyResourceDropMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
public:
    UNoEnemyResourceDropMutator();

};

