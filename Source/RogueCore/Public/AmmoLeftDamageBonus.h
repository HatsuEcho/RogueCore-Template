#pragma once
#include "CoreMinimal.h"
#include "FlatDamageBonus.h"
#include "AmmoLeftDamageBonus.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UAmmoLeftDamageBonus : public UFlatDamageBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AmmoDamageCurve;

    UAmmoLeftDamageBonus();

};

