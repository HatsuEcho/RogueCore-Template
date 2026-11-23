#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ETargetStateDamageBonusType.h"
#include "TargetStateDamageCondition.generated.h"

class UElementEventType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UTargetStateDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetStateDamageBonusType TargetState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* EventType;

    UTargetStateDamageCondition();

};

