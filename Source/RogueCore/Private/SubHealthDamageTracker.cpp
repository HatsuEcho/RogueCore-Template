#include "SubHealthDamageTracker.h"

USubHealthDamageTracker::USubHealthDamageTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TiggerOnPercentage = 0.33f;
    this->DoNotTriggerAtZeroHP = false;
    this->Health = NULL;
}

void USubHealthDamageTracker::SetTrackedPercentage(float new_percentage) {
}

void USubHealthDamageTracker::ResetTrackedDamage() {
}

void USubHealthDamageTracker::OnDamageTaken(float Amount) {
}


