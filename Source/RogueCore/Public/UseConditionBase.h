#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UseConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class ROGUECORE_API UUseConditionBase : public UObject {
    GENERATED_BODY()
public:
    UUseConditionBase();

};

