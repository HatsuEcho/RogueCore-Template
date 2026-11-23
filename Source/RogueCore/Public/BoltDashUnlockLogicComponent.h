#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "BoltDashUnlockLogicComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBoltDashUnlockLogicComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UBoltDashUnlockLogicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoltDashTriggered();
    
};

