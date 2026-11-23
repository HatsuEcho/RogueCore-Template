#include "AlterationListEntry.h"

UAlterationListEntry::UAlterationListEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon = NULL;
    this->Title = NULL;
    this->Alteration = NULL;
}

void UAlterationListEntry::SetAlteration(UPrimaryMutator* InAlteration) {
}

UPrimaryMutator* UAlterationListEntry::GetAlteration() const {
    return NULL;
}


