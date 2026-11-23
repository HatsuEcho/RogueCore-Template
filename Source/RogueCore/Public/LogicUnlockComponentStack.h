#pragma once
#include "CoreMinimal.h"
#include "LogicUnlockValue.h"
#include "LogicUnlockComponentStack.generated.h"

USTRUCT(BlueprintType)
struct FLogicUnlockComponentStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogicUnlockValue> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
    ROGUECORE_API FLogicUnlockComponentStack();
};

