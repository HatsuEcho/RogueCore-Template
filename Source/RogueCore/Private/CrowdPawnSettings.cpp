#include "CrowdPawnSettings.h"

UCrowdPawnSettings::UCrowdPawnSettings() {
    this->AnimationSharingSetup = NULL;
    this->AvoidanceRadius = 100.00f;
    this->FlowFieldRebuildInterval = 1.50f;
    this->FlowFieldMaxCells = 32000;
    this->FlowFieldMaxDistance = 10000.00f;
    this->MaxSpeed = 300.00f;
    this->AvoidanceWeight = 1.50f;
    this->RotationInterpSpeed = 8.00f;
    this->EngagementDistance = 200.00f;
    this->bDrawAvoidanceDebug = false;
    this->bDrawFlowFieldDebug = false;
    this->bDrawMovementDebug = false;
    this->bDrawPerfMetrics = false;
}


