#include "AfflictionSettings.h"

UAfflictionSettings::UAfflictionSettings() {
    this->HeavyStunMinimumTime = 1.00f;
    this->MediumStunMinimumTime = 0.50f;
    this->HeavyStunAffliction = NULL;
    this->MediumStunAffliction = NULL;
    this->ShortStunAffliction = NULL;
    this->StunImmunityAffliction = NULL;
    this->BurningParticles.AddDefaulted(5);
    this->EletrocutedParticles.AddDefaulted(5);
    this->ExplodingParticles.AddDefaulted(5);
    this->ExplodingSounds.AddDefaulted(5);
}


