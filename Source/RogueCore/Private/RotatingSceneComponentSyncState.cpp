#include "RotatingSceneComponentSyncState.h"

FRotatingSceneComponentSyncState::FRotatingSceneComponentSyncState() {
    this->BobbingPhase = 0.00f;
    this->SyncServerTime = 0.00f;
    this->DeltaRotationX = 0.00f;
    this->DeltaRotationY = 0.00f;
    this->DeltaRotationZ = 0.00f;
    this->BobbingSpeed = 0.00f;
    this->BobbingSize = 0.00f;
    this->IsRunning = false;
}

