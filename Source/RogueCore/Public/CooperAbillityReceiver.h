#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CooperAbillityReceiver.generated.h"

class UCooperAbillity;

UINTERFACE(Blueprintable)
class ROGUECORE_API UCooperAbillityReceiver : public UInterface {
    GENERATED_BODY()
};

class ICooperAbillityReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCooperAbillityData(UCooperAbillity* inAbillityData);
    
};

