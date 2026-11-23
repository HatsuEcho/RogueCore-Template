#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TeleportAttackOwner.generated.h"

UINTERFACE(Blueprintable)
class ROGUECORE_API UTeleportAttackOwner : public UInterface {
    GENERATED_BODY()
};

class ITeleportAttackOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleportAttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleportAttackFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleportAttackArrived();
    
};

