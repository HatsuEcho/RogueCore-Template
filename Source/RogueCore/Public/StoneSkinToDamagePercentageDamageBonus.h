#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "StoneSkinToDamagePercentageDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UStoneSkinToDamagePercentageDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamagePercentagePerStoneSkinName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentagePerStoneSkin;

    UStoneSkinToDamagePercentageDamageBonus();

};

