#pragma once
#include "CoreMinimal.h"
#include "EDamageTagConditionType.h"
#include "LogicUnlockDamageFilter.h"
#include "WeaponTagLogicUnlockDamageFilter.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UWeaponTagLogicUnlockDamageFilter : public ULogicUnlockDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> Tags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType Type;

    UWeaponTagLogicUnlockDamageFilter();

};

