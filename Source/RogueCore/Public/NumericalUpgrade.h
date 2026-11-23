#pragma once
#include "CoreMinimal.h"
#include "ENumericUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "NumericalUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNumericalUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericUpgradeType Type;
    
    UNumericalUpgrade();

};

