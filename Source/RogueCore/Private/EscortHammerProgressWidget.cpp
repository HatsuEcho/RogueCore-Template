#include "EscortHammerProgressWidget.h"

UEscortHammerProgressWidget::UEscortHammerProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Objective = NULL;
}

void UEscortHammerProgressWidget::SetObjective(AEscortHammerObjectiveActor* NewObjective) {
}

AEscortHammerObjectiveActor* UEscortHammerProgressWidget::GetObjective() const {
    return NULL;
}


