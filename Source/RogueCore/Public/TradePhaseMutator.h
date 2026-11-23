#pragma once
#include "CoreMinimal.h"
#include "EUnlockType.h"
#include "Mutator.h"
#include "TradePhaseMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTradePhaseMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUnlockType> TradeableUnlockTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Countdown;
    
public:
    UTradePhaseMutator();

};

