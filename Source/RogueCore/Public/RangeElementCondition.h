#pragma once
#include "CoreMinimal.h"
#include "ElementCondition.h"
#include "ElementValueRange.h"
#include "RangeElementCondition.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URangeElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementValueRange Range;

    URangeElementCondition();

};

