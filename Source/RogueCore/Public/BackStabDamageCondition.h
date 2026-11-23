#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "BackStabDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBackStabDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackStabAngle;

    UBackStabDamageCondition();

};

