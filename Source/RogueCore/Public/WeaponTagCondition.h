#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDamageTagConditionType.h"
#include "WeaponTagCondition.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWeaponTagCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> HasTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType Type;
    
    UWeaponTagCondition();

};

