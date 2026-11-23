#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTDecorator_ConditionalGuard.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_ConditionalGuard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector GuardKey;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertLogic;

    UBTDecorator_ConditionalGuard();

};

