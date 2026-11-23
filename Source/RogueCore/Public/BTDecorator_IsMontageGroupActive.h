#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsMontageGroupActive.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsMontageGroupActive : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotGroup;
    
public:
    UBTDecorator_IsMontageGroupActive();

};

