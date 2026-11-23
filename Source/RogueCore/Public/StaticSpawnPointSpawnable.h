#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "StaticSpawnPointSpawnable.generated.h"

UINTERFACE(Blueprintable)
class ROGUECORE_API UStaticSpawnPointSpawnable : public UInterface {
    GENERATED_BODY()
};

class IStaticSpawnPointSpawnable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedOnPoint();
    
};

