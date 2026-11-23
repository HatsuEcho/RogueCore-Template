#include "AlterationWheel.h"

UAlterationWheel::UAlterationWheel() {
    this->SlowDownShare = 0.92f;
    this->SlowDownSharpness = 4.00f;
    this->HubAlteration = NULL;
}

void UAlterationWheel::Spin(int32 InResultIndex, float InDuration, int32 InTurns, float InLandingOffset) {
}

void UAlterationWheel::SetStyle(const FAlterationWheelStyle& InStyle) {
}

void UAlterationWheel::SetAlterations(const TArray<UPrimaryMutator*>& InAlterations, UPrimaryMutator* InHubAlteration) {
}

bool UAlterationWheel::IsSpinning() const {
    return false;
}

bool UAlterationWheel::HasSettled() const {
    return false;
}

int32 UAlterationWheel::GetIndexUnderHand() const {
    return 0;
}

float UAlterationWheel::GetHandAngle() const {
    return 0.0f;
}

TArray<UPrimaryMutator*> UAlterationWheel::GetAlterations() const {
    return TArray<UPrimaryMutator*>();
}


