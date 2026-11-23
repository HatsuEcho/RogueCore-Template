#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DamageParamBonus.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UDamageParamBonus : public UDataAsset {
    GENERATED_BODY()
public:
    UDamageParamBonus();

};

