#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ElementBuildUpEventCondition.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UElementBuildUpEventCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementToCheck;
    
    UElementBuildUpEventCondition();

};

