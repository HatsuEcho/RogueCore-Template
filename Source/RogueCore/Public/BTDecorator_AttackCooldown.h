#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BehaviorTree/BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ValueOrBBKey_Bool -FallbackName=ValueOrBBKey_Bool
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ValueOrBBKey_Float -FallbackName=ValueOrBBKey_Float
#include "BehaviorTree/ValueOrBBKey.h"
#include "BTDecorator_AttackCooldown.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_AttackCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float RandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CooldownKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bCooldownBeforeFirstExecution;
    
public:
    UBTDecorator_AttackCooldown();

};

