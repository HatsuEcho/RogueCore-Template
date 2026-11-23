#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "MockStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMockStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UMockStatusEffectItem();

};

