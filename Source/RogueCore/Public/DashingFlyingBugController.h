#pragma once
#include "CoreMinimal.h"
#include "FSDFlyingBugController.h"
#include "DashingFlyingBugController.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ADashingFlyingBugController : public AFSDFlyingBugController {
    GENERATED_BODY()
public:
    ADashingFlyingBugController(const FObjectInitializer& ObjectInitializer);

};

