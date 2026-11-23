#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RandRange.h"
#include "RandomDamageBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API URandomDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RandomDamageRange;

    URandomDamageBonus();

};

