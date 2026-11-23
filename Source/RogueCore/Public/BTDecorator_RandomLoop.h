#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RandomLoop.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_RandomLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UBTDecorator_RandomLoop();

};

