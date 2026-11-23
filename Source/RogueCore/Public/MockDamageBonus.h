#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "MockDamageBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UMockDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UMockDamageBonus();

};

