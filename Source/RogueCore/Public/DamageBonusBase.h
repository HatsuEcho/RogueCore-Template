#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DamageBonusBase.generated.h"

class UDamageCondition;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UDamageBonusBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;

    UDamageBonusBase();

};

