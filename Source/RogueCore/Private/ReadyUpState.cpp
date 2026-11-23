#include "ReadyUpState.h"

FReadyUpState::FReadyUpState() {
    this->Stage = EReadyUpStage::NotActive;
    this->HoldEndServerTime = 0.00f;
}

