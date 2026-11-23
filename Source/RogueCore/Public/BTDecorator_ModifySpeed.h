#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ModifySpeed.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_ModifySpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier;

    UBTDecorator_ModifySpeed();

};

