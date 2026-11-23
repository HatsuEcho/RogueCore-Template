#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "PlayerHealthStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPlayerHealthStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ChangeAmount;

    UPlayerHealthStatusEffectItem();

};

