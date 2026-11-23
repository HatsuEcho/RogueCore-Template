#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackMode.h"
#include "FindAllyConditionBase.h"
#include "Templates/SubclassOf.h"
#include "HasStatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UHasStatusEffect : public UFindAllyConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectStackMode Mode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 count;

    UHasStatusEffect();

};

