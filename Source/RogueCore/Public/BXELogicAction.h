#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "LogicUnlockValue.h"
#include "BXELogicAction.generated.h"

class UBXELogicUnlockComponent;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBXELogicAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBXELogicUnlockComponent> LogicUnlockClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogicUnlockValue> LogicValues;

    UBXELogicAction();

};

