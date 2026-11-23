#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ElementEffectsUpgradeElement.generated.h"

class UElementType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UElementEffectsUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementType* ElementType;

    UElementEffectsUpgradeElement();

};

