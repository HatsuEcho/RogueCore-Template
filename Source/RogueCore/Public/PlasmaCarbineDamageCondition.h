#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EPlasmaCarbineConditions.h"
#include "PlasmaCarbineDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UPlasmaCarbineDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlasmaCarbineConditions WeaponCondition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Condition;

    UPlasmaCarbineDamageCondition();

};

