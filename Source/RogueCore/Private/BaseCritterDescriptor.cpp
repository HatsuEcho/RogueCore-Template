#include "BaseCritterDescriptor.h"

UBaseCritterDescriptor::UBaseCritterDescriptor() {
    this->Positioning = NULL;
    this->PathfinderType = DeepPathFinderType::Walk;
    this->DestroyWhenOutOfRange = true;
    this->OutOfRanageBehaviour = ECritterOutOfRangeBehaviour::Destroy;
}


