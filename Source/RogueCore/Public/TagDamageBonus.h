#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "TagDamageBonus.generated.h"

class UDamageTag;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTagDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;

    UTagDamageBonus();

};

