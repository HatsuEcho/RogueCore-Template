#pragma once
#include "CoreMinimal.h"
#include "DamageParamBonus.h"
#include "CounterCritChanceDamageParamBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UCounterCritChanceDamageParamBonus : public UDamageParamBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalCritChance;

    UCounterCritChanceDamageParamBonus();

};

