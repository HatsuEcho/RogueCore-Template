#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FlatDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UFlatDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;

    UFlatDamageBonus();

};

