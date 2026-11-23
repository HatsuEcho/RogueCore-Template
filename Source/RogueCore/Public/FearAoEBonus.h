#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FearAoEBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UFearAoEBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FearFactorName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RangeName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;

    UFearAoEBonus();

};

