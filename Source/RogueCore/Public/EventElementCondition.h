#pragma once
#include "CoreMinimal.h"
#include "ElementCondition.h"
#include "EventElementCondition.generated.h"

class UElementEventType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UEventElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* EventToCheck;

    UEventElementCondition();

};

