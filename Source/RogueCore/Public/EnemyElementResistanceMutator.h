#pragma once
#include "CoreMinimal.h"
#include "EnemyFilter.h"
#include "Mutator.h"
#include "EnemyElementResistanceMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnemyElementResistanceMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyFilter EnemyFilter;
    
public:
    UEnemyElementResistanceMutator();

};

