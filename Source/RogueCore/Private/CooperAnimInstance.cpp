#include "CooperAnimInstance.h"

UCooperAnimInstance::UCooperAnimInstance() {
    this->DigAnimPlayRate = 0.00f;
    this->CurrentState = ECooperDroneAIState::Follow;
    this->IsReadyToMine = false;
    this->IsMining = false;
    this->IsFiring = false;
    this->IsReviving = false;
    this->IsCarryingGem = false;
}


