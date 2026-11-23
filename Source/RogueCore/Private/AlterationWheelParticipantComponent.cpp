#include "AlterationWheelParticipantComponent.h"

UAlterationWheelParticipantComponent::UAlterationWheelParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelWindow = NULL;
}

void UAlterationWheelParticipantComponent::Client_ShowWheel_Implementation(const FAlterationWheelData& InData) {
}

void UAlterationWheelParticipantComponent::Client_HideWheel_Implementation() {
}


