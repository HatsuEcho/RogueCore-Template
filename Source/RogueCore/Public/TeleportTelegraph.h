#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TeleportTelegraph.generated.h"

UINTERFACE(Blueprintable)
class ROGUECORE_API UTeleportTelegraph : public UInterface {
    GENERATED_BODY()
};

class ITeleportTelegraph : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Detonate();
    
};

