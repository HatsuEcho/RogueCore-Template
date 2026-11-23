#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDamageConditionMethod.h"
#include "DirectDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDirectDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageConditionMethod Type;

    UDirectDamageCondition();

};

