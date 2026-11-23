#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.h"
#include "EStatusEffectDeathAction.h"
#include "EStatusEffectPopSetting.h"
#include "StatusEffectItem.h"
#include "StatChangeStatusEffectItem.generated.h"

class UObject;
class UPawnStat;
class UStatChangeStatusEffectItem;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UStatChangeStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType StatDisplayTransform;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatChange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByResistances;

    UStatChangeStatusEffectItem();

    UFUNCTION(BlueprintCallable)
    static UStatusEffect* CreateStatSTE(UObject* Owner, UPawnStat* PawnStat, const float StartingValue, const EStatusEffectPopSetting PopSetting, const EStatusEffectDeathAction DeathAction);
    
    UFUNCTION(BlueprintCallable)
    static UStatChangeStatusEffectItem* AddStatToStatusEffect(UStatusEffect* StatusEffect, UPawnStat* StatToAdd, const float StatValue);
    
};

