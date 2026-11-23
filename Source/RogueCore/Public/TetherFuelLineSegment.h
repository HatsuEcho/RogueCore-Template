#pragma once
#include "CoreMinimal.h"
#include "FuelLineSegment.h"
#include "TetherFuelLineSegment.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ATetherFuelLineSegment : public AFuelLineSegment {
    GENERATED_BODY()
public:
    ATetherFuelLineSegment(const FObjectInitializer& ObjectInitializer);

};

