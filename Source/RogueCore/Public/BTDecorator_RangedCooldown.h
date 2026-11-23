#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ValueOrBBKey_Bool -FallbackName=ValueOrBBKey_Bool
#include "BehaviorTree/ValueOrBBKey.h"
#include "RandRange.h"
#include "BTDecorator_RangedCooldown.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_RangedCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool DoCooldownBeforeFirstExecution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange CoolDownTime;

    UBTDecorator_RangedCooldown();

};

