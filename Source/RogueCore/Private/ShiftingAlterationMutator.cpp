#include "ShiftingAlterationMutator.h"

UShiftingAlterationMutator::UShiftingAlterationMutator() {
    this->ShiftEachStage = true;
}

TArray<UPrimaryMutator*> UShiftingAlterationMutator::GetShiftPool() const {
    return TArray<UPrimaryMutator*>();
}


