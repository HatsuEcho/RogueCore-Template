#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ItemTemperatureDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UItemTemperatureDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatThreshold;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeUnderThreshold;

    UItemTemperatureDamageCondition();

};

