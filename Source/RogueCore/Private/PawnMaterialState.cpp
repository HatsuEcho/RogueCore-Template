#include "PawnMaterialState.h"

FPawnMaterialState::FPawnMaterialState() {
    this->MaterialMode = EPawnMaterialMode::Default;
    this->OverrideMaterial = NULL;
    this->OverrideTransitionDuration = 0.00f;
    this->bOverrideRevealing = false;
}

