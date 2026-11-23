#pragma once
#include "CoreMinimal.h"
#include "DamageParamBonus.h"
#include "ElementCritChanceDamageParamBonus.generated.h"

class UElementEventType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UElementCritChanceDamageParamBonus : public UDamageParamBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* ElementType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEffectStack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExtraCritChanceName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraCritChance;

    UElementCritChanceDamageParamBonus();

};

