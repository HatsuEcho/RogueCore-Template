#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "Templates/SubclassOf.h"
#include "MakeAttackableStatusEffectItem.generated.h"

class UAttackerPositioningComponent;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMakeAttackableStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCostModifier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAttackerPositioningComponent> ComponentClass;

    UMakeAttackableStatusEffectItem();

};

