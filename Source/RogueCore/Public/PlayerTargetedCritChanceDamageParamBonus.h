#pragma once
#include "CoreMinimal.h"
#include "DamageParamBonus.h"
#include "EPlayerTargetedCritChanceType.h"
#include "PlayerTargetedCritChanceDamageParamBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UPlayerTargetedCritChanceDamageParamBonus : public UDamageParamBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerTargetedCritChanceType TargetedType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEffectStack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExtraCritChanceName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraCritChance;

    UPlayerTargetedCritChanceDamageParamBonus();

};

