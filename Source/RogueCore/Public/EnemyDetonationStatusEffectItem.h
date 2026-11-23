#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyDetonationStatusEffectItem.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class ROGUECORE_API UDEPRECATED_EnemyDetonationStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FireDetonation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IceDetonation;

    UDEPRECATED_EnemyDetonationStatusEffectItem();

};

