#pragma once
#include "CoreMinimal.h"
#include "DamageParamBonus.h"
#include "WeakpointCritDamageParamBonus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UWeakpointCritDamageParamBonus : public UDamageParamBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalCritChance;

    UWeakpointCritDamageParamBonus();

};

