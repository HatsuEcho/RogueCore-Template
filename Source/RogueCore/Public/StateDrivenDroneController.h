#pragma once
#include "CoreMinimal.h"
#include "DroneControllerBase.h"
#include "StateDrivenDroneController.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AStateDrivenDroneController : public ADroneControllerBase {
    GENERATED_BODY()
public:
    AStateDrivenDroneController(const FObjectInitializer& ObjectInitializer);

};

