#include "StageAlterationIcon.h"

UStageAlterationIcon::UStageAlterationIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon = NULL;
    this->Alteration = NULL;
}

void UStageAlterationIcon::SetAlteration(UPrimaryMutator* InAlteration) {
}


UPrimaryMutator* UStageAlterationIcon::GetAlteration() const {
    return NULL;
}


