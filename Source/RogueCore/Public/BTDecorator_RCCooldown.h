#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_Cooldown -FallbackName=BTDecorator_Cooldown
#include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ValueOrBBKey_Bool -FallbackName=ValueOrBBKey_Bool
#include "BehaviorTree/ValueOrBBKey.h"
#include "BTDecorator_RCCooldown.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_RCCooldown : public UBTDecorator_Cooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool DoCooldownBeforeFirstExecution;

public:
    UBTDecorator_RCCooldown();

};

