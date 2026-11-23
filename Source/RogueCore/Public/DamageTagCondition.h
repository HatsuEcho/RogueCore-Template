#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDamageTagConditionType.h"
#include "DamageTagCondition.generated.h"

class UDamageTag;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDamageTagCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> HasTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageTagConditionType Type;
    
    UDamageTagCondition();

};

