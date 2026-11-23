#include "BXEObjective.h"

UBXEObjective::UBXEObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsObjectiveComplete = true;
}

void UBXEObjective::NotifyObjectiveComplete() {
}

void UBXEObjective::NotifyObjectiveChanged() {
}


