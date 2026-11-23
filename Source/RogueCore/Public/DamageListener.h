#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BXEDamageEvent.h"
#include "DamageParams.h"
#include "DamageListener.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDamageListener : public UInterface {
    GENERATED_BODY()
};

class IDamageListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnDamageTrigger(const FBXEDamageEvent& Event, const FDamageParams& Params);
    
};

