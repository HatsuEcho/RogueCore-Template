#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionGroup.generated.h"

class UUseConditionCollection;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UUseConditionGroup : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseConditionCollection* Collection;
    
    UUseConditionGroup();

};

