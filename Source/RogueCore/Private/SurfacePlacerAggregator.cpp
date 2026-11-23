#include "SurfacePlacerAggregator.h"

USurfacePlacerAggregator::USurfacePlacerAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSurfaceAngle = 180.00f;
    this->SurfaceOffset = 10.00f;
    this->FootprintRadius = 30.00f;
    this->FootprintProbeDepth = 40.00f;
    this->MaxFootprintDeviation = 35.00f;
}


