#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "AmmoUsedDamageBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UAmmoUsedDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageBonusPerRoundFired;

    UAmmoUsedDamageBonus();

};

