#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionOwnerIsAlive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUseConditionOwnerIsAlive : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionOwnerIsAlive();

};

