#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "LogicUnlockDamageFilter.h"
#include "PlayerHealthLogicUnlockDamageFilter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UPlayerHealthLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HealthPercentageRequired;
    
public:
    UPlayerHealthLogicUnlockDamageFilter();

};

