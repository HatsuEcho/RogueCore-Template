#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_FinishBossRecovery.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_FinishBossRecovery : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_FinishBossRecovery();

};

