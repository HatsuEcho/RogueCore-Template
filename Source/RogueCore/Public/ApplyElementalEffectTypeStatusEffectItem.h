#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "ApplyElementalEffectTypeStatusEffectItem.generated.h"

class AItem;
class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UApplyElementalEffectTypeStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementalType;

    UApplyElementalEffectTypeStatusEffectItem();

private:
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
};

