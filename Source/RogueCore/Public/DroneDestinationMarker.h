#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DroneDestinationMarker.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ADroneDestinationMarker : public AActor {
    GENERATED_BODY()
public:
    ADroneDestinationMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

