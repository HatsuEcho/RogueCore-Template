#pragma once
#include "CoreMinimal.h"
#include "DamageListenerTriggerFilter.h"
#include "RandomFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URandomFilter : public UDamageListenerTriggerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    URandomFilter();

};

