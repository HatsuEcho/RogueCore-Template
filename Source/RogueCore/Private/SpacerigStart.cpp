#include "SpacerigStart.h"

ASpacerigStart::ASpacerigStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UsedBy = NULL;
    this->StartType = ESpacerigStartType::PlayerHub;
    this->StartPriorityIndex = 0;
}


