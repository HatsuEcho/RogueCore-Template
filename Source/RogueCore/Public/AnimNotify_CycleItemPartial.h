#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CycleItemPartial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_CycleItemPartial : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_CycleItemPartial();

};

