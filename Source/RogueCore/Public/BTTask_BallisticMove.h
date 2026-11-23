#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_BallisticMove.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTTask_BallisticMove : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_BallisticMove();

};

