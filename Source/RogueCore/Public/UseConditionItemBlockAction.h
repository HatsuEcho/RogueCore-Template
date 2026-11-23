#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionItemBlockAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUseConditionItemBlockAction : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionItemBlockAction();

};

