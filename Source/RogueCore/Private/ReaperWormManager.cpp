#include "ReaperWormManager.h"

UReaperWormManager::UReaperWormManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxChecksPerTick = 1;
    this->CheckInterval = 1.00f;
    this->MaxNavSnapDistance = 1000.00f;
    this->DisableCutOffChecks = false;
    this->MaxSimultaneousDiggers = 2;
}


