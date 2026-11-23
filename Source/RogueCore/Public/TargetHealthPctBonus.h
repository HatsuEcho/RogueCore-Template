#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "TargetHealthPctBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROGUECORE_API UTargetHealthPctBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UTargetHealthPctBonus();

};

