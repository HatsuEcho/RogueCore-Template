#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "EDamageVector.h"
#include "DamageVectorFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UDamageVectorFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageVector IsVector;
    
    UDamageVectorFilter();

};

