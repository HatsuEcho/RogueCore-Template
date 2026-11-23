#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_BossDeathSeal.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_BossDeathSeal : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_BossDeathSeal();

};

